/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001df880; name: FUN_001df880
 */


void FUN_001df880(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *local_68;
  char local_5c [4];
  byte local_58 [8];
  byte local_50 [8];
  undefined2 local_48 [4];
  
  puVar3 = PTR_DAT_027110c0;
  *(undefined4 *)(param_1 + 1) = 0x1000a;
  param_1[2] = (long)param_2;
  param_1[3] = (long)param_3;
  *param_1 = (long)(puVar3 + 0x10);
  plVar7 = param_1 + 4;
  *plVar7 = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
                    /* try { // try from 001df8dc to 001df8ef has its CatchHandler @ 001dfad4 */
  FUN_003c1430(param_1 + 7,param_4,param_5,param_6);
  uVar1 = *(uint *)(param_1 + 5);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(uint *)(param_1 + 5) = uVar1 & 0xf0ffffff | 0x6000000;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  uVar1 = uVar1 >> 0x1e;
  uVar2 = (undefined2)*(undefined4 *)(param_5 + 0x18);
  if ((uVar1 == 3) || ((uVar1 == 2 && (*(char *)(*plVar7 + 0x1fb9) != '\0')))) {
    lVar4 = param_1[6];
    if (lVar4 == 0) {
                    /* try { // try from 001df948 to 001df9df has its CatchHandler @ 001dfadc */
      lVar4 = FUN_001d1a00(*plVar7,6);
      param_1[6] = lVar4;
    }
    *(undefined2 *)(lVar4 + 0x18) = uVar2;
    FUN_001d1850(*plVar7,plVar7);
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 4;
  }
  else {
    local_48[0] = uVar2;
    FUN_003c1490(param_1 + 7,local_48);
  }
  if (param_2 != (long *)0x0) {
    FUN_001e1290((long)param_2 + *(long *)(PTR_DAT_02711080 + (ulong)*(ushort *)(param_2 + 1) * 8),0
                 ,param_1,"PxConstraint: Add to rigid actor 0: Constraint already added");
  }
  if (param_3 != (long *)0x0) {
    FUN_001e1290((long)param_3 + *(long *)(PTR_DAT_02711080 + (ulong)*(ushort *)(param_3 + 1) * 8),0
                 ,param_1,"PxConstraint: Add to rigid actor 1: Constraint already added");
  }
                    /* try { // try from 001df9ec to 001dfabb has its CatchHandler @ 001dfad8 */
  if ((param_2 == (long *)0x0) ||
     ((**(code **)(*param_2 + 0x68))(local_50,param_2), (local_50[0] >> 3 & 1) != 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  }
  if ((param_3 == (long *)0x0) ||
     ((**(code **)(*param_3 + 0x68))(local_58,param_3), (local_58[0] >> 3 & 1) != 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_3 + 0x38))(param_3);
  }
  if ((param_2 == (long *)0x0) || (lVar4 != 0)) {
    if (lVar4 == 0) {
      lVar4 = lVar5;
    }
    if ((lVar4 != 0) && (param_3 == (long *)0x0 || lVar5 != 0)) {
      local_68 = param_1;
      puVar6 = (undefined8 *)FUN_001e0a50(lVar4 + 0x25b0,&local_68,local_5c);
      if (local_5c[0] == '\0') {
        *puVar6 = local_68;
      }
      FUN_001ce320(lVar4 + 0x10,plVar7);
    }
  }
  return;
}


