/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a6760; name: _INIT_80
 */


void _INIT_80(void)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_02710fe0;
  lVar4 = 0;
  do {
    piVar1 = (int *)(puVar2 + lVar4 * 4);
    iVar3 = (int)lVar4;
    *piVar1 = iVar3;
    piVar1[1] = iVar3 + 1;
    lVar4 = lVar4 + 4;
    piVar1[2] = iVar3 + 2;
    piVar1[3] = iVar3 + 3;
  } while (lVar4 != 0x200);
  return;
}


