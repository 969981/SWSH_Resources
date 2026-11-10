/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a1390; name: FUN_010a1390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010a1390(long param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  
  puVar7 = *(undefined1 **)(param_1 + 0x60);
  if (4 < (ulong)(((long)puVar7 - *(long *)(param_1 + 0x58) >> 2) * -0x79435e50d79435e5)) {
    return;
  }
  if (*(undefined1 **)(param_1 + 0x68) == puVar7) {
    FUN_010a6330((long *)(param_1 + 0x58),param_2);
    lVar2 = *(long *)(param_1 + 0x60);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar7 = *param_2;
    puVar7[4] = 0;
    if (param_2[4] != '\0') {
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined4 *)(puVar7 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + 0x10) = uVar8;
      *(undefined8 *)(puVar7 + 0x18) = uVar3;
      puVar7[4] = 1;
    }
    *(undefined8 *)(puVar7 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    uVar8 = *(undefined8 *)(param_2 + 0x2c);
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    uVar4 = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(puVar7 + 0x41) = *(undefined8 *)(param_2 + 0x41);
    *(undefined8 *)(puVar7 + 0x3c) = uVar4;
    *(undefined8 *)(puVar7 + 0x34) = uVar3;
    *(undefined8 *)(puVar7 + 0x2c) = uVar8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    lVar2 = *(long *)(param_1 + 0x60) + 0x4c;
    *(long *)(param_1 + 0x60) = lVar2;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 == 0) {
    uVar1 = FUN_01027d40(_DAT_00000790);
    FUN_0121bc30(lVar2 + -0x4c,uVar1);
    return;
  }
  plVar6 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar1 = FUN_01027d40(*(undefined8 *)(lVar5 + 0x790));
  FUN_0121bc30(lVar2 + -0x4c,uVar1);
                    /* WARNING: Could not recover jumptable at 0x010a14f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6);
  return;
}


