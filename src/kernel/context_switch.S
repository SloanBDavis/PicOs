    .syntax unified
    .cpu    cortex-m0plus
    .thumb

    .global PendSV_Handler
    .type   PendSV_Handler, %function

PendSV_Handler:
    bx      lr

    .size   PendSV_Handler, . - PendSV_Handler
