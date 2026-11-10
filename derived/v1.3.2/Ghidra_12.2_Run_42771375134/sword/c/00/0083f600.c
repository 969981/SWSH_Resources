/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083f600; name: FUN_0083f600
 */


undefined8 FUN_0083f600(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *local_28;
  
  uVar2 = FUN_00825b90(param_1,*(undefined4 *)(param_2 + 0x38),param_2,&local_28);
  if ((uVar2 & 1) == 0) {
    bVar1 = *(byte *)((long)local_28 + 10);
    *(byte *)((long)local_28 + 10) = bVar1 & 0xf0;
    if ((bVar1 >> 4 & 1) != 0) {
      plVar3 = (long *)*local_28;
      uVar4 = (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_2 + 0x68));
      uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar4);
      return uVar4;
    }
  }
  else {
    *(char *)(local_28 + 1) = (char)*(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)((long)local_28 + 9) = 0;
    *(undefined1 *)((long)local_28 + 0xb) = 0;
    plVar3 = (long *)(**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_2 + 0x68));
    *(byte *)((long)local_28 + 10) = *(byte *)((long)local_28 + 10) & 0xf;
    uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)(param_1 + 0x18));
    *local_28 = uVar4;
    *(byte *)((long)local_28 + 10) = *(byte *)((long)local_28 + 10) & 0xf0;
  }
  return *local_28;
}


