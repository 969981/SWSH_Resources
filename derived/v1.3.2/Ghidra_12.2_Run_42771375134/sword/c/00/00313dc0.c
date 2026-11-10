/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00313dc0; name: FUN_00313dc0
 */


void FUN_00313dc0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                 uint *param_5,long *param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char *__s;
  char *pcVar5;
  void *__dest;
  uint uVar6;
  uint uVar7;
  void *__src;
  uint uVar8;
  undefined1 auStack_6c [4];
  char *local_68;
  
  *param_4 = 4;
  *param_3 = 0;
  *param_5 = 0;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_68);
  if ((uVar4 & 1) != 0) {
    if (local_68 != (char *)0x0) {
      *(int *)PTR_DAT_02712238 = *(int *)PTR_DAT_02712238 + 1;
      if (*local_68 == '\0') {
        __s = "";
      }
      else {
        uVar4 = 0;
        do {
          uVar1 = uVar4 + 1;
          lVar2 = uVar4 + 1;
          uVar4 = uVar1;
        } while (local_68[lVar2] != '\0');
                    /* try { // try from 00313e58 to 00313e77 has its CatchHandler @ 00313fc8 */
        __s = (char *)(**(code **)(*param_6 + 0x10))(param_6,(int)uVar1 + 1);
        memcpy(__s,local_68,uVar1 & 0xffffffff);
        __s[uVar1 & 0xffffffff] = '\0';
      }
                    /* try { // try from 00313e88 to 00313e9f has its CatchHandler @ 00313fd4 */
      pcVar5 = strtok(__s," \n");
      if (pcVar5 == (char *)0x0) {
        __src = (void *)0x0;
        uVar6 = 0;
      }
      else {
        uVar8 = 0;
        __src = (void *)0x0;
        uVar7 = 0;
        do {
                    /* try { // try from 00313eb4 to 00313f57 has its CatchHandler @ 00313fd8 */
          FUN_00323980(pcVar5,param_6,auStack_6c,param_7);
          pcVar5 = strtok((char *)0x0," \n");
          uVar6 = uVar7 + 4;
          if (uVar8 < uVar6) {
            uVar3 = 0x20;
            do {
              uVar8 = uVar3;
              uVar3 = uVar8 << 1;
            } while (uVar8 < uVar6);
            __dest = (void *)(**(code **)(*param_6 + 0x10))(param_6,uVar8);
            if (uVar7 != 0) {
              memcpy(__dest,__src,(ulong)uVar7);
            }
            (**(code **)(*param_6 + 0x18))(param_6,__src);
            __src = __dest;
          }
          memcpy((void *)((long)__src + (ulong)uVar7),auStack_6c,4);
          uVar7 = uVar6;
        } while (pcVar5 != (char *)0x0);
        uVar6 = uVar6 >> 2;
      }
      *param_3 = __src;
      *param_5 = uVar6;
                    /* try { // try from 00313f84 to 00313f8f has its CatchHandler @ 00313fd4 */
      (**(code **)(*param_6 + 0x18))(param_6,__s);
    }
                    /* try { // try from 00313f98 to 00313fa3 has its CatchHandler @ 00313fc4 */
    (**(code **)(*param_6 + 0x18))(param_6,0);
  }
  return;
}


