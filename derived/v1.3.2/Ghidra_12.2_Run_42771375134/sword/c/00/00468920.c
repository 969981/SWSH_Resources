/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468920; name: FUN_00468920
 */


void FUN_00468920(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_02713110;
  lVar4 = *(long *)(PTR_DAT_02713110 + 8);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    while( true ) {
      lVar5 = *(long *)(lVar3 + 0x68);
      plVar1 = (long *)(puVar2 + 8);
      if (lVar4 != lVar3) {
        plVar1 = (long *)&DAT_00000068;
      }
      *plVar1 = lVar5;
      if (*(long *)puVar2 == lVar3) {
        *(undefined8 *)puVar2 = 0;
        FUN_00468b10(lVar3,0);
      }
      else {
        FUN_00468b10(lVar3,0);
      }
      if (lVar5 == 0) break;
      lVar4 = *(long *)(puVar2 + 8);
      lVar3 = lVar5;
    }
  }
  return;
}


