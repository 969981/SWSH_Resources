/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1050; name: FUN_001e1050
 */


void FUN_001e1050(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((lVar3 != 0) && (uVar4 = (ulong)*(uint *)(lVar3 + 0x50), *(uint *)(lVar3 + 0x50) != 0)) {
    lVar5 = 8;
    lVar3 = *(long *)(lVar3 + 0x48);
    lVar2 = *(long *)(lVar3 + 8);
    while( true ) {
      uVar4 = uVar4 - 1;
      if (lVar2 != 0) {
        uVar1 = (**(code **)*param_2)(param_2,0x80000000);
        *(undefined8 *)(lVar3 + lVar5) = uVar1;
      }
      if (uVar4 == 0) break;
      lVar5 = lVar5 + 0x10;
      lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x48);
      lVar2 = *(long *)(lVar3 + lVar5);
    }
  }
  return;
}


