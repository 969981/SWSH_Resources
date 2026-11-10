/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006046f0; name: FUN_006046f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006046f0(long param_1,undefined8 *param_2)

{
  int iVar1;
  void *__s;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  size_t __n;
  long lVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    return 0x22;
  }
  *param_2 = 0;
  lVar5 = *(long *)(param_1 + 0xb8);
  lVar6 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
  __n = *(size_t *)(lVar6 + 0x50);
  if (0 < (long)__n) {
    __s = (void *)(**(code **)(lVar5 + 8))(lVar5,__n);
    if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,__n);
    }
    return 0x40;
  }
  if (__n != 0) {
    return 6;
  }
  plVar2 = (long *)(**(code **)(lVar5 + 8))(lVar5,0x18);
  if (plVar2 == (long *)0x0) {
    return 0x40;
  }
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = 0;
  lRam0000000000000000 = param_1;
  puVar3 = (undefined8 *)(**(code **)(lVar5 + 8))(lVar5,0x48);
  if (puVar3 == (undefined8 *)0x0) {
    iVar1 = 0x40;
  }
  else {
    puVar3[7] = 0;
    puVar3[8] = 0;
    *puVar3 = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    pcVar4 = *(code **)(lVar6 + 0x70);
    _DAT_00000050 = puVar3;
    if ((pcVar4 == (code *)0x0) || (iVar1 = (*pcVar4)(0), iVar1 == 0)) {
      *param_2 = 0;
      plVar2[2] = 0;
      lVar5 = *(long *)(param_1 + 0xd0);
      *plVar2 = lVar5;
      plVar2[1] = 0;
      puVar3 = (undefined8 *)(param_1 + 200);
      if (lVar5 != 0) {
        puVar3 = (undefined8 *)(lVar5 + 8);
      }
      *puVar3 = plVar2;
      *(long **)(param_1 + 0xd0) = plVar2;
      return 0;
    }
  }
  (**(code **)(lVar5 + 0x10))(lVar5,plVar2);
  (**(code **)(lVar5 + 0x10))(lVar5,0);
  return iVar1;
}


