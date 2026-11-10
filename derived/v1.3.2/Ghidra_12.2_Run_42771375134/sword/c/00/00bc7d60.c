/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc7d60; name: FUN_00bc7d60
 */


undefined8 FUN_00bc7d60(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00bcd4d0(*(undefined8 *)(param_1 + 0x5e8),0,param_2,0);
  if ((uVar2 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x5e8);
    uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,1);
    if ((((((((uVar2 & 1) == 0) && (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,2), (uVar2 & 1) == 0)) &&
           (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,3), (uVar2 & 1) == 0)) &&
          ((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,4), (uVar2 & 1) == 0 &&
           (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,5), (uVar2 & 1) == 0)))) &&
         (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,6), (uVar2 & 1) == 0)) &&
        (((((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,7), (uVar2 & 1) == 0 &&
            (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,8), (uVar2 & 1) == 0)) &&
           ((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,9), (uVar2 & 1) == 0 &&
            (((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,10), (uVar2 & 1) == 0 &&
              (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0xb), (uVar2 & 1) == 0)) &&
             (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0xc), (uVar2 & 1) == 0)))))) &&
          ((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0xd), (uVar2 & 1) == 0 &&
           (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0xe), (uVar2 & 1) == 0)))) &&
         (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0xf), (uVar2 & 1) == 0)))) &&
       ((((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x10), (uVar2 & 1) == 0 &&
          (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x11), (uVar2 & 1) == 0)) &&
         ((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x12), (uVar2 & 1) == 0 &&
          (((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x13), (uVar2 & 1) == 0 &&
            (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x14), (uVar2 & 1) == 0)) &&
           (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x15), (uVar2 & 1) == 0)))))) &&
        (((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x16), (uVar2 & 1) == 0 &&
          (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x17), (uVar2 & 1) == 0)) &&
         ((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x18), (uVar2 & 1) == 0 &&
          (((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x19), (uVar2 & 1) == 0 &&
            (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x1a), (uVar2 & 1) == 0)) &&
           ((uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x1b), (uVar2 & 1) == 0 &&
            (uVar2 = FUN_00bcd4d0(*puVar1,0,param_2,0x1c), (uVar2 & 1) == 0)))))))))))) {
      uVar3 = FUN_00bcd4d0(*puVar1,0,param_2,0x1d);
      return uVar3;
    }
  }
  return 1;
}


