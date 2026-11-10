/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010096d0; name: FUN_010096d0
 */


undefined8 FUN_010096d0(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 local_18;
  
  local_18 = 0;
  piVar2 = (int *)FUN_01009440(param_1,param_2,&local_18);
  if (piVar2 == (int *)0x0) {
    return 0xcbf29ce484222645;
  }
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    piVar4 = (int *)0x0;
    if (uVar3 != 0) {
      puVar1 = (uint *)((long)piVar2 + uVar3);
      piVar4 = (int *)((long)puVar1 + (ulong)*puVar1);
    }
  }
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0x1d) {
    return 0;
  }
  uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xe];
  if (uVar3 == 0) {
    return 0;
  }
  return *(undefined8 *)((long)piVar4 + uVar3);
}


