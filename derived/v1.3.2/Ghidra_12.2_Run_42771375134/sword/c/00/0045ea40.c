/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045ea40; name: FUN_0045ea40
 */


undefined8 FUN_0045ea40(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  char *__dest;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  size_t __n;
  
  if (param_1 != (char *)0x0) {
    sVar3 = strlen(param_1);
    iVar2 = (int)sVar3;
    __dest = (char *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,iVar2 + 2);
    puVar1 = PTR_DAT_02713080;
    *(char **)PTR_DAT_02713080 = __dest;
    if (__dest == (char *)0x0) {
      return 0x34;
    }
    __n = (ulong)(iVar2 + 1) - 1;
    sVar4 = strlen(param_1);
    if (sVar4 + 1 <= __n) {
      __n = sVar4 + 1;
    }
    strncpy(__dest,param_1,__n);
    __dest[__n] = '\0';
    lVar6 = *(long *)puVar1;
    if (*(char *)(lVar6 + (ulong)(iVar2 - 1)) != '/') {
      *(undefined1 *)(lVar6 + (sVar3 & 0xffffffff)) = 0x2f;
      *(undefined1 *)(*(long *)puVar1 + (ulong)(iVar2 + 1)) = 0;
    }
  }
  plVar7 = *(long **)PTR_DAT_02712a28;
  do {
    if (plVar7 == (long *)0x0) {
      return 1;
    }
    while( true ) {
      if ((int)plVar7[1] == 1) {
        iVar2 = FUN_0045eb80(*(undefined4 *)((long)plVar7 + 0xc),(int)plVar7[2],plVar7[5],plVar7[6])
        ;
      }
      else {
        iVar2 = FUN_0045edd0();
      }
      if ((iVar2 != 1) || (pcVar8 = (code *)plVar7[7], pcVar8 == (code *)0x0)) break;
      uVar5 = FUN_0042eec0();
      (*pcVar8)(uVar5,1,plVar7[8]);
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return 1;
      }
    }
    plVar7 = (long *)*plVar7;
  } while( true );
}


