/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8750; name: FUN_004f8750
 */


undefined8 * FUN_004f8750(char *param_1,void *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  size_t __n;
  char *__dest;
  size_t sVar4;
  
  puVar2 = PTR_DAT_027137c8;
  puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,0x38);
  if (puVar3 != (undefined8 *)0x0) {
    bVar1 = *(byte *)((long)puVar3 + 0x34);
    *(byte *)((long)puVar3 + 0x34) = bVar1 | 1;
    *(undefined4 *)(puVar3 + 6) = param_3;
    if (param_2 == (void *)0x0) {
      *(byte *)((long)puVar3 + 0x34) = bVar1 & 0xfd | 1;
    }
    else {
      *(byte *)((long)puVar3 + 0x34) = bVar1 | 3;
      memcpy(puVar3 + 1,param_2,0x24);
    }
    __n = strlen(param_1);
    __dest = (char *)FUN_00404690(*(undefined4 *)puVar2,__n + 1);
    *puVar3 = __dest;
    if (__dest == (char *)0x0) {
      FUN_00404870(*(undefined4 *)puVar2,puVar3);
      puVar3 = (undefined8 *)0x0;
    }
    else {
      sVar4 = strlen(param_1);
      if (sVar4 + 1 <= __n) {
        __n = sVar4 + 1;
      }
      strncpy(__dest,param_1,__n);
      __dest[__n] = '\0';
    }
  }
  return puVar3;
}


