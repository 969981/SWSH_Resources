/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b67d0; name: FUN_008b67d0
 */


void FUN_008b67d0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x7c) = 8;
    FUN_01038270(*(undefined8 *)(param_1 + 0x98),1);
    FUN_008c0940(*(undefined8 *)(param_1 + 0x90));
    FUN_008c0930(*(undefined8 *)(param_1 + 0x90));
    lVar3 = *(long *)(param_1 + 0x90);
    uVar1 = FUN_008c83c0(*(undefined8 *)(param_1 + 0x88));
    *(undefined4 *)(lVar3 + 0x644) = uVar1;
    FUN_008c7da0(*(undefined8 *)(param_1 + 0x88));
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
    FUN_01520b70(lVar3,uVar1,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x640));
    FUN_008c12f0(*(undefined8 *)(param_1 + 0x90));
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5cc) = 0;
    lVar4 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x688),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x690),1);
    FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),1);
    FUN_008c8180(*(undefined8 *)(param_1 + 0x88),0);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
    FUN_008c61d0(*(undefined8 *)(param_1 + 0x88),1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008b68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      return;
    }
  }
  return;
}


