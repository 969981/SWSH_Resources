/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007cdb20; name: FUN_007cdb20
 */


undefined8 FUN_007cdb20(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 uStack_65;
  undefined2 local_64;
  undefined2 uStack_62;
  
  if ((*(long *)PTR_DAT_02716750 == 0 || *(long *)PTR_DAT_02716a30 == 0) ||
     (*(long *)(*(long *)PTR_DAT_02716a30 + 0xf0) == 0)) {
    return 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x50);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x58) = puVar6;
  *(undefined1 *)(param_1 + 0x80) = 0;
  puVar3 = PTR_DAT_02710860;
  if (puVar1 != puVar2) {
    while( true ) {
      local_70 = *puVar1;
      local_68 = 0;
      local_66 = 0;
      local_64 = 0x1e;
      if (puVar6 < *(undefined8 **)(param_1 + 0x60)) {
        uVar7 = *(undefined8 *)(param_1 + 0x68);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_007cddb4;
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *puVar6 = local_70;
        puVar6[1] = CONCAT26(uStack_62,
                             CONCAT24(local_64,CONCAT13(uStack_65,CONCAT12(local_66,local_68))));
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 0x10;
      }
      else {
        FUN_007cf210((ulong *)(param_1 + 0x50),&local_70);
      }
      if (puVar2 == puVar1 + 1) break;
      puVar6 = *(undefined8 **)(param_1 + 0x58);
      puVar1 = puVar1 + 1;
    }
  }
  plVar5 = *(long **)(param_1 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x170,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_006e1890(lVar4);
  }
LAB_007cddb4:
                    /* WARNING: Subroutine does not return */
  abort();
}


