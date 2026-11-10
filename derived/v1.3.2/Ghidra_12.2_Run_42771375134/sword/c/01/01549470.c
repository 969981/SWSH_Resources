/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01549470; name: FUN_01549470
 */


void FUN_01549470(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ushort *puVar4;
  char *pcVar5;
  
  puVar1 = (undefined1 *)(param_1 + 0x1666);
  lVar3 = 0x31;
  do {
    *(undefined2 *)(puVar1 + -6) = *(undefined2 *)(puVar1 + -2);
    puVar1[-4] = *puVar1;
    puVar1 = puVar1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(short *)(param_1 + 0x1724) = (short)*(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x1726) = *(undefined1 *)(param_2 + 0x13);
  pcVar5 = (char *)(param_1 + 0x1662);
  lVar3 = 0x32;
  iVar2 = 0;
  do {
    if ((*(uint *)(param_2 + 8) == (uint)*(ushort *)(pcVar5 + -2)) && (*pcVar5 != '\0')) {
      iVar2 = iVar2 + 1;
    }
    pcVar5 = pcVar5 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (iVar2 < (int)(uint)*(byte *)(param_2 + 0x12)) {
    return;
  }
  puVar4 = (ushort *)(param_1 + 0x1660);
  lVar3 = 0x30;
  if (*(uint *)(param_2 + 8) != (uint)*puVar4) goto LAB_01549528;
  do {
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
LAB_01549528:
    do {
      if (lVar3 == 0) {
        return;
      }
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (*(uint *)(param_2 + 8) != (uint)*puVar4);
  } while( true );
}


