/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc2ca0; name: FUN_00bc2ca0
 */


void FUN_00bc2ca0(long param_1,int param_2,uint param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (5 < param_3) {
    return;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  iVar1 = param_2 + -1;
  if (*(int *)(param_1 + 0x614) == param_2) {
    iVar2 = FUN_0150a980(lVar5,iVar1);
    FUN_00bd30e0(*(undefined8 *)(param_1 + 0x5f0),1,param_3,0);
    FUN_0150ab10(lVar5,iVar1,param_3);
    if (iVar2 - 1U <= param_3) goto LAB_00bc2d9c;
    FUN_00bd2690(*(undefined8 *)(param_1 + 0x5f0),param_3);
    if ((param_4 & 1) == 0) goto LAB_00bc2dac;
    uVar3 = *(undefined8 *)(param_1 + 0x5f0);
    uVar4 = 0;
  }
  else {
    FUN_0150ab10(lVar5,iVar1,param_3);
LAB_00bc2d9c:
    if ((param_4 & 1) == 0) goto LAB_00bc2dac;
    uVar3 = *(undefined8 *)(param_1 + 0x5f0);
    uVar4 = 1;
  }
  FUN_00bd1f40(uVar3,uVar4);
LAB_00bc2dac:
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bc2dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


