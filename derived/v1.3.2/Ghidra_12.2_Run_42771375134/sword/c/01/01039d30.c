/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01039d30; name: FUN_01039d30
 */


void FUN_01039d30(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  long lStack_90;
  long local_38;
  
  if ((*(long *)(param_1 + 0xba0) != 0) && (*(int *)(*(long *)(param_1 + 0xba0) + 0x198) == 3)) {
    iVar2 = FUN_0103cd10();
    if (iVar2 != 0) {
      plVar6 = *(long **)(param_1 + 8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN_0077d050(lVar4,0x400);
      *(long **)(lVar4 + 8) = plVar6;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      uVar5 = *(undefined8 *)(param_1 + 0xa88);
      local_c0 = (undefined *)FUN_0103cda0(*(undefined8 *)(param_1 + 0xba0));
      FUN_0077eb10(uVar5,&local_c0,lVar4);
      local_a0 = PTR_LAB_027238d8;
      local_98 = 0;
      local_c0 = PTR_LAB_027238e0;
      local_b8 = (code *)PTR_FUN_027238e8;
      local_b0 = PTR_LAB_027238f0;
      puStack_a8 = PTR_LAB_027238f8;
      lStack_90 = param_1;
      local_38 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN_0103b440(param_1,&local_c0,&local_38,iVar2,0);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      pcVar1 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined *)0x0;
        puStack_a8 = (undefined *)0x0;
        local_c0 = (undefined *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar1)(&local_a0);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    *(undefined4 *)(param_1 + 0xbac) = 2;
  }
  return;
}


