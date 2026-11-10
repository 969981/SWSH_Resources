/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103f420; name: FUN_0103f420
 */


void FUN_0103f420(ulong *param_1,long param_2,int *param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_2 + 0xae8);
  param_1[4] = (ulong)param_4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (ulong)uVar1;
  param_1[1] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = PTR_DAT_02710798;
  param_1[0x11] = (ulong)*(ushort *)(param_2 + 0xb18);
  lVar6 = *(long *)(*(long *)puVar2 + 0x248);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = lVar6 + (long)*param_3 * 0xa68 + (long)param_3[1] * 0x18;
  param_1[1] = *(ulong *)(lVar5 + 0x60);
  param_1[2] = (ulong)*(byte *)(lVar5 + 0x71);
  param_1[3] = (ulong)*(byte *)(lVar5 + 0x70);
  plVar3 = *(long **)(param_2 + 0x418);
  if ((plVar3 != (long *)0x0) && (lVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,0), lVar5 != 0)) {
    uVar4 = FUN_008783b0();
    param_1[5] = uVar4 & 0xffffffff;
    uVar4 = FUN_008783c0(lVar5);
    param_1[9] = uVar4 & 0xffff;
    uVar4 = FUN_0087a5f0(lVar5);
    param_1[0xd] = uVar4 & 0xffffffff;
  }
  plVar3 = *(long **)(param_2 + 0x420);
  if ((plVar3 != (long *)0x0) && (lVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,0), lVar5 != 0)) {
    uVar4 = FUN_008783b0();
    param_1[6] = uVar4 & 0xffffffff;
    uVar4 = FUN_008783c0(lVar5);
    param_1[10] = uVar4 & 0xffff;
    uVar4 = FUN_0087a5f0(lVar5);
    param_1[0xe] = uVar4 & 0xffffffff;
  }
  plVar3 = *(long **)(param_2 + 0x428);
  if ((plVar3 != (long *)0x0) && (lVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,0), lVar5 != 0)) {
    uVar4 = FUN_008783b0();
    param_1[7] = uVar4 & 0xffffffff;
    uVar4 = FUN_008783c0(lVar5);
    param_1[0xb] = uVar4 & 0xffff;
    uVar4 = FUN_0087a5f0(lVar5);
    param_1[0xf] = uVar4 & 0xffffffff;
  }
  plVar3 = *(long **)(param_2 + 0x430);
  if ((plVar3 != (long *)0x0) && (lVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,0), lVar5 != 0)) {
    uVar4 = FUN_008783b0();
    param_1[8] = uVar4 & 0xffffffff;
    uVar4 = FUN_008783c0(lVar5);
    param_1[0xc] = uVar4 & 0xffff;
    uVar4 = FUN_0087a5f0(lVar5);
    param_1[0x10] = uVar4 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0103f608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


