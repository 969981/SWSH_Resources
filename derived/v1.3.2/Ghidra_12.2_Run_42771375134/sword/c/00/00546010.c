/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546010; name: thunk_FUN_005464f0
 */


void thunk_FUN_005464f0(long *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  undefined8 *__dest;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02713b88 + 0x10);
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0x18))();
    param_1[7] = 0;
  }
  uVar2 = param_1[6];
  if (uVar2 != 0) {
    uVar3 = uVar2 + *(long *)(uVar2 - 8);
    do {
      uVar3 = uVar3 - 1;
    } while (uVar2 <= uVar3);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[6] = 0;
  }
  lVar4 = param_1[3];
  __dest = *(undefined8 **)(lVar4 + 0x10);
  puVar1 = *(undefined8 **)(lVar4 + 0x18);
  if (__dest != puVar1) {
    if ((long *)*__dest != param_1) {
      do {
        __dest = __dest + 1;
        if (puVar1 == __dest) goto LAB_005465c0;
      } while ((long *)*__dest != param_1);
    }
    if (__dest != puVar1) {
      __n = (long)puVar1 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(lVar4 + 0x18) = __dest + ((long)__n >> 3);
    }
  }
LAB_005465c0:
  FUN_00545e90(param_1);
  return;
}


