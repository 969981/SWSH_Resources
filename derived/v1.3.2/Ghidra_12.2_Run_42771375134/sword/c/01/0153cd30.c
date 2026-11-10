/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153cd30; name: FUN_0153cd30
 */


void FUN_0153cd30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  puVar6 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar6 < *(undefined8 **)(param_1 + 0xf0)) {
    uVar7 = *(undefined8 *)(param_1 + 0xf8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0153cf10;
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    puVar2 = PTR_LAB_0272acd0;
    puVar1 = PTR_LAB_0272acc8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar4 = PTR_LAB_0272ace0;
    puVar3 = PTR_LAB_0272acd8;
    *puVar6 = puVar1;
    puVar6[1] = puVar2;
    puVar6[2] = puVar3;
    puVar6[3] = puVar4;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 0x80;
    puVar6 = *(undefined8 **)(param_1 + 0x118);
    if (puVar6 < *(undefined8 **)(param_1 + 0x120)) goto LAB_0153ce74;
LAB_0153cdd0:
    FUN_01543e90(param_1 + 0x110,auStack_38);
    puVar6 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar6) {
LAB_0153cef0:
      FUN_01544160(param_1 + 0x140,auStack_40);
      return;
    }
  }
  else {
    FUN_01543bc0(param_1 + 0xe0,auStack_28);
    puVar6 = *(undefined8 **)(param_1 + 0x118);
    if (*(undefined8 **)(param_1 + 0x120) <= puVar6) goto LAB_0153cdd0;
LAB_0153ce74:
    uVar7 = *(undefined8 *)(param_1 + 0x128);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0153cf10;
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    puVar2 = PTR_LAB_0272ad10;
    puVar1 = PTR_LAB_0272ad08;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar7 = DAT_0272ad20;
    puVar3 = PTR_LAB_0272ad18;
    *puVar6 = puVar1;
    puVar6[1] = puVar2;
    puVar6[2] = puVar3;
    puVar6[3] = uVar7;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 0x80;
    puVar6 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar6) goto LAB_0153cef0;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x158);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    puVar2 = PTR_LAB_0272acf0;
    puVar1 = PTR_LAB_0272ace8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar4 = PTR_LAB_0272ad00;
    puVar3 = PTR_LAB_0272acf8;
    *puVar6 = puVar1;
    puVar6[1] = puVar2;
    puVar6[2] = puVar3;
    puVar6[3] = puVar4;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 0x80;
    return;
  }
LAB_0153cf10:
                    /* WARNING: Subroutine does not return */
  abort();
}


