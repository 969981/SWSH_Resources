/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00773540; name: FUN_00773540
 */


undefined4 FUN_00773540(long param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
    return 0x3f800000;
  }
  if (param_2 == 2) {
    piVar1 = (int *)((long)*(uint **)(lVar3 + 400) + (ulong)**(uint **)(lVar3 + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0xc];
  }
  else if (param_2 == 1) {
    piVar1 = (int *)((long)*(uint **)(lVar3 + 400) + (ulong)**(uint **)(lVar3 + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0xb];
  }
  else {
    if (param_2 != 0) {
      return 0x3f800000;
    }
    piVar1 = (int *)((long)*(uint **)(lVar3 + 400) + (ulong)**(uint **)(lVar3 + 400));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[10];
  }
  uVar4 = 0;
  if ((ulong)uVar2 != 0) {
    uVar4 = *(undefined4 *)((long)piVar1 + (ulong)uVar2);
  }
  return uVar4;
}


