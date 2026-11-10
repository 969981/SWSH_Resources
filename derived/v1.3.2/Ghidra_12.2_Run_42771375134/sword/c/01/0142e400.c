/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142e400; name: FUN_0142e400
 */


void FUN_0142e400(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long local_80;
  undefined2 local_74 [2];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar9 == (undefined8 *)0x0) goto LAB_0142e460;
    plVar4 = (long *)(**(code **)*puVar9)(puVar9);
    lVar5 = FUN_01410b60();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar9 = puVar9 + -10;
        goto LAB_0142e460;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_0142e460:
  uVar6 = FUN_0140ce50(puVar9);
  local_48 = 0;
  uVar7 = FUN_01422150(puVar9[0xc],0x7570b42d1d84087e,&local_48);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = FUN_0142ed40(puVar9[0xc],0xa4730d5748bab233,local_74), (uVar7 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar10)(puVar10);
  puVar2 = PTR_DAT_02717528;
  puVar1 = (undefined8 *)PTR_DAT_02717530;
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), puVar1 = (undefined8 *)PTR_DAT_02717530,
     iVar3 != 0)) {
    uVar8 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar8;
    __cxa_guard_release(PTR_DAT_02717528);
    puVar1 = (undefined8 *)PTR_DAT_02717530;
  }
  for (; plVar4 != puVar1; plVar4 = (long *)*plVar4) {
  }
  PTR_DAT_02717530 = (undefined *)puVar1;
  FUN_00ff86a0(&local_80,puVar10[0xd],0);
  FUN_014160a0(uVar6,&local_80);
  uVar8 = FUN_01416420(uVar6);
  FUN_014c84c0(uVar8,0,local_48);
  uVar8 = FUN_01416420(uVar6);
  FUN_014c9900(uVar8,1,local_74[0],1);
  uVar8 = FUN_01416420(uVar6);
  FUN_014c9030(uVar8,2,lVar5);
  FUN_01416510(DAT_01d4bcd8,DAT_01d4c268,uVar6);
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar10)(puVar10);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0)) {
    uVar6 = FUN_00b8c810();
    *puVar1 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != puVar1; plVar4 = (long *)*plVar4) {
  }
  local_70 = 0x8303e0e1fa38a8d1;
  local_68 = "optionbar";
  local_60 = 9;
  local_58 = 0;
  uVar6 = FUN_0089c480(puVar10[0x9f],&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  FUN_01037030(uVar6);
  *(undefined4 *)(puVar9 + 0xe) = 2;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


