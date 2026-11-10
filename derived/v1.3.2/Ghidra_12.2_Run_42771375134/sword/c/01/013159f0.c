/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013159f0; name: FUN_013159f0
 */


undefined8 FUN_013159f0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == param_3) {
    param_3 = param_2;
    if (*(ulong *)(param_1 + 0x80) != param_2) goto LAB_01315a38;
  }
  else {
    if (param_2 < param_3) {
      uVar1 = param_2;
    }
    else {
      uVar1 = param_3;
      param_3 = param_2;
    }
    param_2 = uVar1;
    if (*(ulong *)(param_1 + 0x80) != uVar1) goto LAB_01315a38;
  }
  if (*(ulong *)(param_1 + 0x88) == param_3) {
    return 1;
  }
LAB_01315a38:
  if (((((((((*(ulong *)(param_1 + 0x98) == param_2) && (*(ulong *)(param_1 + 0xa0) == param_3)) ||
           ((*(ulong *)(param_1 + 0xb0) == param_2 && (*(ulong *)(param_1 + 0xb8) == param_3)))) ||
          ((*(ulong *)(param_1 + 200) == param_2 && (*(ulong *)(param_1 + 0xd0) == param_3)))) ||
         ((*(ulong *)(param_1 + 0xe0) == param_2 && (*(ulong *)(param_1 + 0xe8) == param_3)))) ||
        ((((*(ulong *)(param_1 + 0xf8) == param_2 && (*(ulong *)(param_1 + 0x100) == param_3)) ||
          ((*(ulong *)(param_1 + 0x110) == param_2 && (*(ulong *)(param_1 + 0x118) == param_3)))) ||
         ((*(ulong *)(param_1 + 0x128) == param_2 && (*(ulong *)(param_1 + 0x130) == param_3))))))
       || (((*(ulong *)(param_1 + 0x140) == param_2 && (*(ulong *)(param_1 + 0x148) == param_3)) ||
           ((((*(ulong *)(param_1 + 0x158) == param_2 && (*(ulong *)(param_1 + 0x160) == param_3))
             || ((*(ulong *)(param_1 + 0x170) == param_2 && (*(ulong *)(param_1 + 0x178) == param_3)
                 ))) ||
            ((((*(ulong *)(param_1 + 0x188) == param_2 && (*(ulong *)(param_1 + 400) == param_3)) ||
              ((*(ulong *)(param_1 + 0x1a0) == param_2 && (*(ulong *)(param_1 + 0x1a8) == param_3)))
              ) || ((((*(ulong *)(param_1 + 0x1b8) == param_2 &&
                      (*(ulong *)(param_1 + 0x1c0) == param_3)) ||
                     ((*(ulong *)(param_1 + 0x1d0) == param_2 &&
                      (*(ulong *)(param_1 + 0x1d8) == param_3)))) ||
                    ((*(ulong *)(param_1 + 0x1e8) == param_2 &&
                     (*(ulong *)(param_1 + 0x1f0) == param_3)))))))))))) ||
      ((((*(ulong *)(param_1 + 0x200) == param_2 && (*(ulong *)(param_1 + 0x208) == param_3)) ||
        ((((*(ulong *)(param_1 + 0x218) == param_2 && (*(ulong *)(param_1 + 0x220) == param_3)) ||
          ((*(ulong *)(param_1 + 0x230) == param_2 && (*(ulong *)(param_1 + 0x238) == param_3)))) ||
         (((((*(ulong *)(param_1 + 0x248) == param_2 && (*(ulong *)(param_1 + 0x250) == param_3)) ||
            ((*(ulong *)(param_1 + 0x260) == param_2 && (*(ulong *)(param_1 + 0x268) == param_3))))
           || ((((*(ulong *)(param_1 + 0x278) == param_2 && (*(ulong *)(param_1 + 0x280) == param_3)
                 ) || ((*(ulong *)(param_1 + 0x290) == param_2 &&
                       (*(ulong *)(param_1 + 0x298) == param_3)))) ||
               ((*(ulong *)(param_1 + 0x2a8) == param_2 && (*(ulong *)(param_1 + 0x2b0) == param_3))
               )))) ||
          ((*(ulong *)(param_1 + 0x2c0) == param_2 && (*(ulong *)(param_1 + 0x2c8) == param_3)))))))
        ) || ((((((*(ulong *)(param_1 + 0x2d8) == param_2 &&
                  (*(ulong *)(param_1 + 0x2e0) == param_3)) ||
                 ((*(ulong *)(param_1 + 0x2f0) == param_2 &&
                  (*(ulong *)(param_1 + 0x2f8) == param_3)))) ||
                ((*(ulong *)(param_1 + 0x308) == param_2 && (*(ulong *)(param_1 + 0x310) == param_3)
                 ))) || ((*(ulong *)(param_1 + 800) == param_2 &&
                         (*(ulong *)(param_1 + 0x328) == param_3)))) ||
              ((((*(ulong *)(param_1 + 0x338) == param_2 && (*(ulong *)(param_1 + 0x340) == param_3)
                 ) || ((*(ulong *)(param_1 + 0x350) == param_2 &&
                       (*(ulong *)(param_1 + 0x358) == param_3)))) ||
               ((*(ulong *)(param_1 + 0x368) == param_2 && (*(ulong *)(param_1 + 0x370) == param_3))
               )))))))) ||
     (((*(ulong *)(param_1 + 0x380) == param_2 && (*(ulong *)(param_1 + 0x388) == param_3)) ||
      ((((*(ulong *)(param_1 + 0x398) == param_2 && (*(ulong *)(param_1 + 0x3a0) == param_3)) ||
        ((*(ulong *)(param_1 + 0x3b0) == param_2 && (*(ulong *)(param_1 + 0x3b8) == param_3)))) ||
       ((*(ulong *)(param_1 + 0x3c8) == param_2 && (*(ulong *)(param_1 + 0x3d0) == param_3)))))))) {
    return 1;
  }
  return 0;
}


