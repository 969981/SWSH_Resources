/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2990; name: FUN_009a2990
 */


void FUN_009a2990(undefined8 param_1,undefined2 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char local_58 [4];
  char local_54 [4];
  undefined1 auStack_48 [4];
  undefined1 local_44 [4];
  
  *param_2 = 0;
  local_44[0] = *(undefined1 *)(param_3 + 2);
  uVar1 = *param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar6 = FUN_009423e0();
  FUN_00929b50(uVar6,uVar1,local_44,local_54,local_58);
  if (local_54[0] != '\0') {
    uVar6 = FUN_00942380(param_1);
    FUN_00942390(param_1);
    uVar7 = FUN_00931920();
    uVar5 = FUN_008e0a00(uVar1);
    uVar4 = FUN_008f9470(uVar6,uVar7,uVar5);
    uVar3 = local_44[0];
    if (local_58[0] == '\0') {
      FUN_009423b0(param_1);
      FUN_009366b0();
    }
    else {
      lVar8 = FUN_00942400(param_1);
      *(undefined4 *)(lVar8 + 0x10) = *puVar2;
      *(undefined1 *)(lVar8 + 0x14) = uVar4;
      *(undefined1 *)(lVar8 + 0x15) = uVar3;
      *(undefined2 *)(lVar8 + 0x16) = 0;
      *(undefined1 *)(lVar8 + 0x18) = 0;
      FUN_0095ee00(auStack_48);
      uVar6 = FUN_009423c0(param_1);
      FUN_0095ed00(uVar6,puVar2,(undefined4 *)(lVar8 + 0x10),auStack_48);
      uVar6 = FUN_009423e0(param_1);
      FUN_00929c40(uVar6,uVar1);
      *(undefined1 *)((long)param_2 + 1) = 1;
    }
    *(undefined1 *)param_2 = 1;
  }
  return;
}


