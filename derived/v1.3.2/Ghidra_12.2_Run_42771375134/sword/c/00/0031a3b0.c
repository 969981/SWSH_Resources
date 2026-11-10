/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031a3b0; name: FUN_0031a3b0
 */


void FUN_0031a3b0(undefined8 *param_1,int *param_2)

{
  size_t sVar1;
  char *__s;
  undefined **ppuVar2;
  code *pcVar3;
  undefined1 auStack_c0 [128];
  
  if (PTR_s_eVERTICAL_025e7418 != (undefined *)0x0) {
    __s = PTR_s_eVERTICAL_025e7418;
    ppuVar2 = &PTR_s_eHORIZONTAL_025e7428;
    do {
      if ((*(int *)(ppuVar2 + -1) == *param_2) && (*__s != '\0')) {
        pcVar3 = *(code **)*param_1;
        sVar1 = strlen(__s);
        (*pcVar3)(param_1,__s,sVar1);
      }
      __s = *ppuVar2;
      ppuVar2 = ppuVar2 + 2;
    } while (__s != (char *)0x0);
  }
  pcVar3 = *(code **)*param_1;
  sVar1 = strlen(" ");
  (*pcVar3)(param_1,&DAT_01ce77a5,sVar1);
                    /* WARNING: Subroutine does not return */
  memset(auStack_c0,0,0x80);
}


