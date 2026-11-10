/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e02d0; name: FUN_006e02d0
 */


void FUN_006e02d0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = *(long *)(*(long *)PTR_DAT_027154f0 + 0x10);
  FUN_00701720(param_1,0);
  puVar2 = PTR_DAT_027154f8;
  puVar1 = PTR_DAT_027154f8 + 0x10;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = (long)puVar1;
  param_1[9] = (long)(puVar2 + 0xa0);
  param_1[10] = (long)(puVar2 + 0xe0);
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  puVar1 = PTR_DAT_02710860;
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  param_1[0x2f] = lVar6;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_006cee90((long)param_1 + 0x19c,1,0);
  param_1[0x35] = 0;
  iVar3 = FUN_006f83b0(param_2);
  *(int *)(param_1 + 0x2b) = iVar3;
  if (iVar3 == 0x1407) {
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    if (lVar8 == 0) {
      return;
    }
    if (iVar3 != 0x1307) {
      return;
    }
  }
  plVar9 = (long *)param_1[1];
  param_1[0x2a] = param_2;
  iVar4 = FUN_006f8300(param_2,1);
  iVar5 = FUN_006f8380(param_1[0x2a],1);
  iVar3 = *(int *)(param_1[0x2a] + 0x58c);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,0x140,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
  }
  FUN_006e1100(lVar7,iVar5 * iVar4 * iVar3,lVar8);
  *(long **)(lVar7 + 8) = plVar9;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x140;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = param_1[0x29];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    param_1[0x29] = 0;
  }
  param_1[0x29] = lVar7;
  *(undefined4 *)(param_1 + 0x28) = 10;
  return;
}


