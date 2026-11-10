/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153c950; name: FUN_0153c950
 */


void FUN_0153c950(long param_1)

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
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0153cb30;
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    puVar2 = PTR_LAB_0272ac10;
    puVar1 = PTR_LAB_0272ac08;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar4 = PTR_LAB_0272ac20;
    puVar3 = PTR_LAB_0272ac18;
    *puVar6 = puVar1;
    puVar6[1] = puVar2;
    puVar6[2] = puVar3;
    puVar6[3] = puVar4;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 0x80;
    puVar6 = *(undefined8 **)(param_1 + 0x118);
    if (puVar6 < *(undefined8 **)(param_1 + 0x120)) goto LAB_0153ca94;
LAB_0153c9f0:
    FUN_01542db0(param_1 + 0x110,auStack_38);
    puVar6 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar6) {
LAB_0153cb10:
      FUN_01543080(param_1 + 0x140,auStack_40);
      return;
    }
  }
  else {
    FUN_01542ae0(param_1 + 0xe0,auStack_28);
    puVar6 = *(undefined8 **)(param_1 + 0x118);
    if (*(undefined8 **)(param_1 + 0x120) <= puVar6) goto LAB_0153c9f0;
LAB_0153ca94:
    uVar7 = *(undefined8 *)(param_1 + 0x128);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0153cb30;
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    puVar2 = PTR_LAB_0272ac50;
    puVar1 = PTR_LAB_0272ac48;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar4 = PTR_LAB_0272ac60;
    puVar3 = PTR_LAB_0272ac58;
    *puVar6 = puVar1;
    puVar6[1] = puVar2;
    puVar6[2] = puVar3;
    puVar6[3] = puVar4;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 0x80;
    puVar6 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x150) <= puVar6) goto LAB_0153cb10;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x158);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
    puVar2 = PTR_LAB_0272ac30;
    puVar1 = PTR_LAB_0272ac28;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar4 = PTR_LAB_0272ac40;
    puVar3 = PTR_LAB_0272ac38;
    *puVar6 = puVar1;
    puVar6[1] = puVar2;
    puVar6[2] = puVar3;
    puVar6[3] = puVar4;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 0x80;
    return;
  }
LAB_0153cb30:
                    /* WARNING: Subroutine does not return */
  abort();
}


