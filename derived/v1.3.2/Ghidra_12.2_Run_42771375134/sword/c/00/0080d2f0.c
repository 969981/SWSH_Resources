/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080d2f0; name: FUN_0080d2f0
 */


undefined8 FUN_0080d2f0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  undefined8 *puVar2;
  size_t sVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_48;
  
  __src = (undefined8 *)*param_1;
  if ((uint)((int)param_1[1] - (int)__src) < 8) {
    lVar6 = param_1[1] - (long)__src;
    if ((int)lVar6 < 8) {
      iVar4 = 8;
      puVar2 = &local_48;
      do {
        sVar3 = (size_t)(int)lVar6;
        memcpy(puVar2,__src,sVar3);
        *param_1 = *param_1 + sVar3;
        uVar1 = FUN_0080cd70(param_1);
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        __src = (undefined8 *)*param_1;
        iVar4 = iVar4 - (int)lVar6;
        lVar6 = param_1[1] - (long)__src;
        puVar2 = (undefined8 *)((long)puVar2 + sVar3);
      } while ((int)lVar6 < iVar4);
      sVar3 = (size_t)iVar4;
    }
    else {
      puVar2 = &local_48;
      sVar3 = 8;
    }
    puVar5 = &local_48;
    memcpy(puVar2,__src,sVar3);
    puVar2 = (undefined8 *)(*param_1 + sVar3);
  }
  else {
    puVar2 = __src + 1;
    puVar5 = __src;
  }
  *param_1 = (long)puVar2;
  *param_2 = *puVar5;
  return 1;
}


