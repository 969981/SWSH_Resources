/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083a7c0; name: FUN_0083a7c0
 */


void FUN_0083a7c0(long param_1,long param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined4 local_60 [12];
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_008344d0(*(long *)(param_1 + 8),param_3,"SetEnumValue","Field does not match message type.")
    ;
  }
  if (*(int *)(param_3 + 0x40) == 3) {
    FUN_008344d0(*(undefined8 *)(param_1 + 8),param_3,"SetEnumValue",
                 "Field is repeated; the method requires a singular field.");
  }
  if (*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_3 + 0x3c) * 4) != 8) {
    FUN_00836040(*(undefined8 *)(param_1 + 8),param_3,"SetEnumValue",8);
  }
  if ((*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x7c) == 3) ||
     (lVar2 = FUN_007e3f10(*(undefined8 *)(param_3 + 0x70),param_4), lVar2 != 0)) {
    cVar1 = *(char *)(param_3 + 0x44);
    local_60[0] = param_4;
  }
  else {
    FUN_00801270(local_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
                 ,0x531);
    uVar3 = FUN_00800f30(local_60,"SetEnumValue accepts only valid integer values: value ");
    uVar3 = FUN_00801220(uVar3,param_4);
    uVar3 = FUN_00800f30(uVar3," unexpected for field ");
    uVar3 = FUN_00800f60(uVar3,*(undefined8 *)(param_3 + 8));
    FUN_00800fa0(auStack_68,uVar3);
    FUN_00801290(local_60);
    local_60[0] = *(undefined4 *)(*(long *)(param_3 + 0x88) + 0x10);
    cVar1 = *(char *)(param_3 + 0x44);
  }
  if (cVar1 == '\0') {
    FUN_00832cb0(param_1,param_2,param_3,local_60);
  }
  else {
    FUN_00828550(param_2 + *(int *)(param_1 + 0x34),*(undefined4 *)(param_3 + 0x38),
                 *(undefined4 *)(param_3 + 0x3c),local_60[0],param_3);
  }
  return;
}


