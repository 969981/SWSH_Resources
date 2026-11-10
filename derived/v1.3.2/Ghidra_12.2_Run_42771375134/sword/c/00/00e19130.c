/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e19130; name: FUN_00e19130
 */


void FUN_00e19130(long param_1,long *param_2)

{
  long *plVar1;
  size_t __n;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *__dest;
  long *aplStack_a0 [12];
  undefined8 local_38;
  
  __dest = *(undefined8 **)(param_1 + 0xb0);
  aplStack_a0[0] = param_2;
  if (*(undefined8 **)(param_1 + 0xb8) != __dest) {
    do {
      while( true ) {
        local_38 = *__dest;
        uVar2 = FUN_00e2eac0(aplStack_a0,&local_38);
        if ((uVar2 & 1) == 0) break;
        __n = *(long *)(param_1 + 0xb8) - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(undefined8 **)(param_1 + 0xb8) = __dest + ((long)__n >> 3);
        if (__dest + ((long)__n >> 3) == __dest) goto LAB_00e19200;
      }
      __dest = __dest + 1;
    } while (*(undefined8 **)(param_1 + 0xb8) != __dest);
  }
LAB_00e19200:
  FUN_00e2eb00(aplStack_a0);
  FUN_00dbbc60(*(undefined8 *)(param_1 + 0xe8),param_2);
  plVar4 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb0);
  plVar1 = *(long **)(*(long *)(param_1 + 0xe8) + 0xb8);
  do {
    if (plVar4 == plVar1) {
      return;
    }
    while (((plVar3 = (long *)*plVar4, plVar3 == (long *)0x0 || plVar3[0x3a] != *param_2 ||
            (uVar2 = (**(code **)(*plVar3 + 0x88))(), (uVar2 & 1) != 0)) ||
           (*(char *)(*plVar4 + 0x1c7) != '\0'))) {
      plVar4 = plVar4 + 1;
      if (plVar1 == plVar4) {
        return;
      }
    }
    (**(code **)(*(long *)*plVar4 + 0x80))();
    plVar4 = plVar4 + 1;
  } while( true );
}


