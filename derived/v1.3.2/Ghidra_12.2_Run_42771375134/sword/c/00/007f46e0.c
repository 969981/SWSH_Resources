/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f46e0; name: FUN_007f46e0
 */


void FUN_007f46e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_2 + 0x78);
  if ((*(char *)(lVar5 + 0x59) != '\0') && (*(int *)(param_2 + 0x3c) != 0xb)) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                 "[lazy = true] can only be specified for submessage fields.");
    lVar5 = *(long *)(param_2 + 0x78);
  }
  if ((*(char *)(lVar5 + 0x58) != '\0') &&
     ((*(int *)(param_2 + 0x40) != 3 || (*(int *)(param_2 + 0x3c) - 9U < 4)))) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,2,
                 "[packed = true] can only be specified for repeated primitive fields.");
  }
  if (((*(long *)(param_2 + 0x50) != 0) &&
      (lVar6 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar5 = FUN_0084ad30(), lVar6 != lVar5))
     && (*(char *)(*(long *)(*(long *)(param_2 + 0x50) + 0x20) + 0x50) != '\0')) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      uVar2 = *(undefined8 *)(param_2 + 8);
      pcVar4 = "MessageSets cannot have fields, only extensions.";
      uVar3 = 0;
    }
    else {
      if ((*(int *)(param_2 + 0x40) == 1) && (*(int *)(param_2 + 0x3c) == 0xb)) goto LAB_007f47f8;
      uVar2 = *(undefined8 *)(param_2 + 8);
      pcVar4 = "Extensions of MessageSets must be optional messages.";
      uVar3 = 2;
    }
    FUN_007eac10(param_1,uVar2,param_3,uVar3,pcVar4);
  }
LAB_007f47f8:
  lVar5 = *(long *)(param_2 + 0x30);
  if ((((lVar5 != 0) && (lVar7 = *(long *)(lVar5 + 0x90), lVar6 = FUN_008469a0(), lVar7 != lVar6))
      && ((*(int *)(*(long *)(lVar5 + 0x90) + 0x4c) == 3 && (*(long *)(param_2 + 0x50) != 0)))) &&
     (((lVar5 = *(long *)(*(long *)(param_2 + 0x50) + 0x10), lVar5 == 0 ||
       (lVar7 = *(long *)(lVar5 + 0x90), lVar6 = FUN_008469a0(), lVar7 == lVar6)) ||
      (*(int *)(*(long *)(lVar5 + 0x90) + 0x4c) != 3)))) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,3,
                 "Extensions to non-lite types can only be declared in non-lite files.  Note that you cannot extend a non-lite type to contain a lite type, but the reverse is allowed."
                );
  }
  if (((*(int *)(param_2 + 0x3c) == 0xb) &&
      (*(char *)(*(long *)(*(long *)(param_2 + 0x68) + 0x20) + 0x53) != '\0')) &&
     (uVar1 = FUN_007f5220(param_1,param_2,param_3), (uVar1 & 1) == 0)) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "map_entry should not be set explicitly. Use map<KeyType, ValueType> instead.");
    return;
  }
  return;
}


