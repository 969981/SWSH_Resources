/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a5400; name: FUN_009a5400
 */


void FUN_009a5400(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    while( true ) {
      piVar1 = (int *)(param_2 + lVar3);
      piVar2 = (int *)(param_1 + lVar3);
      *piVar2 = *piVar2 + *piVar1;
      *(char *)(piVar2 + 1) = (char)piVar2[1] + (char)piVar1[1];
      *(char *)((long)piVar2 + 5) = *(char *)((long)piVar2 + 5) + *(char *)((long)piVar1 + 5);
      *(char *)((long)piVar2 + 6) = *(char *)((long)piVar2 + 6) + *(char *)((long)piVar1 + 6);
      *(char *)((long)piVar2 + 7) = *(char *)((long)piVar2 + 7) + *(char *)((long)piVar1 + 7);
      *(char *)(piVar2 + 2) = (char)piVar2[2] + (char)piVar1[2];
      *(char *)((long)piVar2 + 9) = *(char *)((long)piVar2 + 9) + *(char *)((long)piVar1 + 9);
      *(char *)((long)piVar2 + 10) = *(char *)((long)piVar2 + 10) + *(char *)((long)piVar1 + 10);
      if (*(char *)((long)piVar2 + 0xb) != '\0') break;
      *(undefined1 *)((long)piVar2 + 0xb) = *(undefined1 *)((long)piVar1 + 0xb);
      if ((char)piVar1[3] == '\0') goto LAB_009a54bc;
LAB_009a549c:
      lVar3 = lVar3 + 0x10;
      if (lVar3 == 0x60) {
        return;
      }
    }
    if ((char)piVar1[3] != '\0') goto LAB_009a549c;
LAB_009a54bc:
    *(undefined1 *)((long)piVar2 + 0xd) = 0;
    lVar3 = lVar3 + 0x10;
    if (lVar3 == 0x60) {
      return;
    }
  } while( true );
}


