/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc7730; name: FUN_00cc7730
 */


undefined8 FUN_00cc7730(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x660);
  uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)
     ) {
    lVar3 = *(long *)(param_1 + 0x668);
    uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
    if (((uVar1 & 1) != 0) &&
       (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
      lVar3 = *(long *)(param_1 + 0x670);
      uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
      if (((uVar1 & 1) != 0) &&
         (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
        lVar3 = *(long *)(param_1 + 0x678);
        uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
        if (((uVar1 & 1) != 0) &&
           (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
          lVar3 = *(long *)(param_1 + 0x680);
          uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
          if (((uVar1 & 1) != 0) &&
             (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
            lVar3 = *(long *)(param_1 + 0x688);
            uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
            if (((uVar1 & 1) != 0) &&
               (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
              lVar3 = *(long *)(param_1 + 0x690);
              uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
              if (((uVar1 & 1) != 0) &&
                 (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
                lVar3 = *(long *)(param_1 + 0x698);
                uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
                if (((uVar1 & 1) != 0) &&
                   (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
                  lVar3 = *(long *)(param_1 + 0x6a0);
                  uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
                  if (((uVar1 & 1) != 0) &&
                     (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
                    lVar3 = *(long *)(param_1 + 0x6a8);
                    uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
                    if (((uVar1 & 1) != 0) &&
                       (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
                      lVar3 = *(long *)(param_1 + 0x6b0);
                      uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
                      if (((uVar1 & 1) != 0) &&
                         (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
                        lVar3 = *(long *)(param_1 + 0x6b8);
                        uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
                        if ((uVar1 & 1) != 0) {
                          uVar2 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140));
                          return uVar2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


