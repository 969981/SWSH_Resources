/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032a630; name: FUN_0032a630
 */


void FUN_0032a630(long *param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_470 [64];
  undefined1 local_270;
  undefined1 *local_268;
  ulong local_260;
  undefined1 local_258 [512];
  undefined1 local_58;
  undefined1 *local_50;
  ulong local_48;
  
  uVar2 = (**(code **)(param_2 + 0x18))(param_1[2]);
  if (uVar2 != 0) {
    local_48 = 0x4000000000;
    local_58 = 1;
    local_50 = local_258;
    local_470[0] = 0;
                    /* try { // try from 0032a680 to 0032a68f has its CatchHandler @ 0032a898 */
    FUN_00320470(local_258,uVar2,local_470);
                    /* try { // try from 0032a69c to 0032a6a3 has its CatchHandler @ 0032a888 */
    (**(code **)(param_2 + 0x10))(param_1[2],local_50,uVar2);
    uVar9 = 0;
    local_260 = 0x4000000000;
    local_270 = 1;
    local_268 = (undefined1 *)local_470;
    do {
      lVar4 = *(long *)(local_50 + uVar9 * 8);
      lVar5 = param_1[5];
      if ((*(int *)(lVar5 + 0x3c) != 0) &&
         (uVar8 = (lVar4 << 0x20 ^ 0xffffffffffffffffU) + lVar4, uVar8 = uVar8 ^ uVar8 >> 0x16,
         uVar8 = uVar8 + (uVar8 << 0xd ^ 0xffffffffffffffff), uVar8 = (uVar8 ^ uVar8 >> 8) * 9,
         uVar8 = uVar8 ^ uVar8 >> 0xf, uVar8 = uVar8 + (uVar8 << 0x1b ^ 0xffffffffffffffff),
         uVar7 = *(uint *)(*(long *)(lVar5 + 0x20) +
                          (ulong)(*(int *)(lVar5 + 0x2c) - 1U &
                                 ((uint)(uVar8 >> 0x1f) ^ (uint)uVar8)) * 4), uVar7 != 0xffffffff))
      {
        do {
          uVar8 = (ulong)uVar7;
          if (*(long *)(*(long *)(lVar5 + 0x10) + uVar8 * 0x10) == lVar4) {
            if (*(long *)(lVar5 + 0x10) + uVar8 * 0x10 != 0) goto LAB_0032a768;
            break;
          }
          uVar7 = *(uint *)(*(long *)(lVar5 + 0x18) + uVar8 * 4);
        } while (uVar7 != 0xffffffff);
      }
                    /* try { // try from 0032a75c to 0032a767 has its CatchHandler @ 0032a8fc */
      FUN_0032a960(param_1,lVar4,local_470);
LAB_0032a768:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
    uVar9 = 0;
    do {
                    /* try { // try from 0032a780 to 0032a787 has its CatchHandler @ 0032a8a8 */
      FUN_0032ab10(param_1,*(undefined8 *)(local_268 + uVar9 * 8));
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
    puVar6 = (uint *)(*param_1 + 0x10);
    if (*puVar6 != 0) {
      uVar2 = *puVar6 - 1;
      if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar2 * 0x10 + 8) != '\0') {
                    /* try { // try from 0032a7c4 to 0032a7c7 has its CatchHandler @ 0032a878 */
        (**(code **)(*(long *)param_1[1] + 0x28))();
        puVar6 = (uint *)(*param_1 + 0x10);
        uVar2 = *puVar6 - 1;
      }
      *puVar6 = uVar2;
    }
    puVar1 = local_268;
    if ((-1 < (long)local_260) && ((local_260 & 0x7fffffff00000000) != 0)) {
      if (local_470 == (undefined8 *)local_268) {
        local_270 = 0;
      }
      else if (local_268 != (undefined1 *)0x0) {
                    /* try { // try from 0032a7fc to 0032a80f has its CatchHandler @ 0032a874 */
        plVar3 = (long *)FUN_00400d30();
        (**(code **)(*plVar3 + 0x18))(plVar3,puVar1);
      }
    }
    puVar1 = local_50;
    if ((((-1 < (long)local_48) && ((local_48 & 0x7fffffff00000000) != 0)) &&
        (local_258 != local_50)) && (local_50 != (undefined1 *)0x0)) {
                    /* try { // try from 0032a83c to 0032a84f has its CatchHandler @ 0032a870 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,puVar1);
    }
  }
  return;
}


