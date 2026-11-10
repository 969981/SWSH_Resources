/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f92a0; name: FUN_003f92a0
 */


void FUN_003f92a0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = (long)(PTR_DAT_027129a0 + 0x10);
                    /* try { // try from 003f92c8 to 003f92cf has its CatchHandler @ 003f93e4 */
  lVar1 = FUN_003fc7b0(param_1[5]);
                    /* try { // try from 003f92d4 to 003f932b has its CatchHandler @ 003f93ec */
  lVar2 = FUN_003fc7b0(param_1[6]);
  *(int *)(*(long *)(lVar1 + 0x88) + 0x94) = *(int *)(*(long *)(lVar1 + 0x88) + 0x94) + -1;
  if (lVar2 != 0) {
    *(int *)(*(long *)(lVar2 + 0x88) + 0x94) = *(int *)(*(long *)(lVar2 + 0x88) + 0x94) + -1;
  }
  if (param_1[0xb] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x48);
    (**(code **)(**(long **)(*(long *)(lVar1 + 0x720) + 0x6e8) + 0x48))();
    FUN_0011da90(*(undefined8 *)(lVar1 + 0x720),param_1[0xb]);
    param_1[0xb] = 0;
  }
  if ((int)param_1[0xc] != -1) {
    lVar1 = *(long *)(param_1[1] + 0x48);
                    /* try { // try from 003f934c to 003f936f has its CatchHandler @ 003f93e8 */
    FUN_00113eb0(*(undefined8 *)(lVar1 + 0x748));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    FUN_003dda00(lVar1,param_1);
    FUN_003cd6e0(*(undefined8 *)(lVar1 + 0x1048),param_1);
  }
                    /* try { // try from 003f937c to 003f93c3 has its CatchHandler @ 003f93ec */
  FUN_003ba5c0(param_1[1],param_1);
  FUN_003ba5c0(param_1[2],param_1);
  if ((int)param_1[10] != -1) {
    uVar3 = *(undefined8 *)(*(long *)(param_1[1] + 0x48) + 0x1048);
    if (*(char *)((long)param_1 + 0x42) < '\0') {
      FUN_003cf7c0(uVar3,param_1);
    }
    else {
      FUN_003cf6c0(uVar3,param_1);
    }
  }
  *param_1 = (long)(PTR_DAT_02712780 + 0x10);
  return;
}


