#ifndef HOOKZZ_FUNCTION_WRAPPER_INTERCEPT_ROUTING_HANDLER_H_
#define HOOKZZ_FUNCTION_WRAPPER_INTERCEPT_ROUTING_HANDLER_H_

#include "ClosureTrampolineBridge/AssemblyClosureTrampoline.h"
#include "Interceptor.h"
#include "hookzz_internal.h"

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

// Dispatch the routing befor running the origin function
void prologue_routing_dispatch(RegisterContext *reg_ctx, ClosureTrampolineEntry *entry);

// Dispatch the routing before the function return . (as it's implementation by relpace `return address` in the stack ,or LR register)
void epilogue_routing_dispatch(RegisterContext *reg_ctx, ClosureTrampolineEntry *entry);

void pre_call_forward_handler(RegisterContext *reg_ctx, HookEntry *entry);

void post_call_forward_handler(RegisterContext *reg_ctx, HookEntry *entry);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif