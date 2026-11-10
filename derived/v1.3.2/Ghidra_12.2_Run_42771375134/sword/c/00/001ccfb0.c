/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ccfb0; name: FUN_001ccfb0
 */


void FUN_001ccfb0(long param_1,undefined8 *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_250;
  undefined1 auStack_248 [512];
  undefined1 local_48;
  undefined1 *local_40;
  ulong local_38;
  
  if ((param_4 & 1) == 0) {
    FUN_001cd170(param_1,param_2,param_1 + 0x2050,param_3 & 1);
    if (*(char *)(param_1 + 0x1fb9) != '\0') {
      if ((param_3 & 1) != 0) {
        *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x10;
      }
      local_38 = 0x4000000000;
      local_40 = auStack_248;
      local_48 = 1;
                    /* try { // try from 001cd030 to 001cd037 has its CatchHandler @ 001cd110 */
      lVar5 = FUN_00206d30();
                    /* try { // try from 001cd038 to 001cd043 has its CatchHandler @ 001cd100 */
      uVar4 = FUN_001f3be0(param_2,&local_250);
      puVar3 = local_40;
      if (uVar4 != 0) {
        uVar2 = *(uint *)(param_2 + 1);
        uVar8 = *param_2;
        uVar7 = 0;
        do {
          puVar1 = (undefined8 *)(*(long *)(local_250 + uVar7 * 8) + lVar5 + -0x20);
          if ((*(uint *)(puVar1 + 1) & 0xf000000) == 0x1000000) {
            *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) & 0x3fffffff | uVar2 & 0xc0000000;
            *puVar1 = uVar8;
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
      }
      if ((((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) &&
          (auStack_248 != local_40)) && (local_40 != (undefined1 *)0x0)) {
                    /* try { // try from 001cd0c0 to 001cd0d3 has its CatchHandler @ 001cd0fc */
        plVar6 = (long *)FUN_00400d30();
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar3);
      }
    }
  }
  else {
    FUN_001cd570(param_1,param_2);
  }
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xffffffdf;
  return;
}


