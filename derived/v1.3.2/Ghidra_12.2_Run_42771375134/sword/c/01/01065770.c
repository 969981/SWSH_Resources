/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01065770; name: FUN_01065770
 */


void FUN_01065770(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_02723b28;
  if (*PTR_DAT_02723b28 == '\0') {
    plVar8 = *(long **)(*(long *)PTR_DAT_02710540 + 0xe8);
    local_68 = 0x300000003;
    uStack_60 = 8;
    local_70 = 0x3c000000003;
    local_80 = 0x300000005;
    local_78 = 0x300000500;
    local_58 = 3;
    local_50 = 0;
    local_48 = 1;
    local_46 = 1;
    local_44 = 1;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x58,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_0079d200(lVar6,plVar8,&local_80);
    *(long **)(lVar6 + 8) = plVar8;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x58;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    puVar3 = PTR_DAT_02716578;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar7 = *(undefined8 **)puVar3;
    *(long *)puVar3 = lVar6;
    if (puVar7 != (undefined8 *)0x0) {
      plVar8 = (long *)puVar7[1];
      uVar1 = puVar7[2];
      uVar2 = puVar7[3];
      uVar9 = puVar7[4];
      (**(code **)*puVar7)();
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar1,uVar2,uVar9);
      lVar6 = *(long *)puVar3;
    }
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 + 0x48;
    }
    FUN_006cef90(lVar5);
    *puVar4 = 1;
  }
  return;
}


