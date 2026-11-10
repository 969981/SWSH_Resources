/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031faa0; name: FUN_0031faa0
 */


void FUN_0031faa0(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*(uint *)(param_1 + 3) != 0) {
    puVar4 = (undefined8 *)param_1[2];
    lVar5 = (ulong)*(uint *)(param_1 + 3) << 3;
    do {
                    /* try { // try from 0031fadc to 0031fadf has its CatchHandler @ 0031fc98 */
      (**(code **)(**(long **)*param_1 + 0x18))(*(long **)*param_1,*puVar4);
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar1 = *(uint *)((long)param_1 + 0x4c);
  *(undefined4 *)(param_1 + 3) = 0;
  if (uVar1 != 0) {
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      uVar2 = 0;
      do {
        uVar3 = *(uint *)((long)param_1[8] + uVar2 * 4);
        if (uVar3 != 0xffffffff) {
          do {
            uVar3 = *(uint *)(param_1[7] + (ulong)uVar3 * 4);
          } while (uVar3 != 0xffffffff);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar1);
                    /* try { // try from 0031fb34 to 0031fb3f has its CatchHandler @ 0031fc90 */
                    /* WARNING: Subroutine does not return */
      memset((void *)param_1[8],-1,(ulong)(uVar1 << 2));
    }
    uVar2 = 0;
    do {
      uVar3 = *(uint *)(param_1[8] + uVar2 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[7] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar1);
  }
  if (param_1[5] != 0) {
                    /* try { // try from 0031fc4c to 0031fc4f has its CatchHandler @ 0031fc94 */
    (**(code **)(**(long **)param_1[4] + 0x18))();
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x1c)) &&
      ((*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) != 0)) && (param_1[2] != 0)) {
                    /* try { // try from 0031fc78 to 0031fc7b has its CatchHandler @ 0031fc8c */
    (**(code **)(**(long **)param_1[1] + 0x18))();
  }
  return;
}


