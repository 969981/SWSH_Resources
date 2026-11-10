/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f9390; name: FUN_001f9390
 */


void FUN_001f9390(long param_1,long *param_2,uint param_3,ulong param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long local_80;
  undefined8 *local_78;
  char local_70;
  long *local_68;
  
  iVar3 = (**(code **)(*param_2 + 0xd8))(param_2);
  if (((param_4 & 1) != 0) && (lVar4 = (**(code **)(*param_2 + 0x100))(param_2), lVar4 != 0)) {
    uVar5 = (**(code **)(*param_2 + 0x100))(param_2);
    FUN_001ca8c0(uVar5,param_2,0);
  }
  uVar10 = iVar3 * 8;
  local_70 = 0x400 < uVar10;
  if (uVar10 < 0x401) {
    local_78 = (undefined8 *)((long)&local_80 - ((ulong)uVar10 + 0xf & 0x1fffffff0));
  }
  else {
                    /* try { // try from 001f9424 to 001f9437 has its CatchHandler @ 001f9624 */
    local_78 = (undefined8 *)
               FUN_00401b30(&local_68,uVar10,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                            ,0x414);
  }
  local_80 = param_1;
  *local_78 = *(undefined8 *)param_2[0x11];
  if (iVar3 - 1U != 0) {
    uVar9 = 0;
    uVar11 = 1;
    do {
      plVar8 = (long *)local_78[uVar9];
      if ((int)plVar8[0x39] == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = plVar8[0x38];
      }
                    /* try { // try from 001f94bc to 001f94c3 has its CatchHandler @ 001f9644 */
      for (uVar12 = 0; uVar6 = (**(code **)(*plVar8 + 0x1c8))(plVar8), uVar12 < (uVar6 & 0xffffffff)
          ; uVar12 = uVar12 + 1) {
        local_78[uVar11 + uVar12 & 0xffffffff] = *(undefined8 *)(lVar4 + uVar12 * 8);
      }
      uVar9 = uVar9 + 1;
      uVar11 = (ulong)(uint)((int)uVar11 + (int)uVar12);
    } while (uVar9 < iVar3 - 1U);
    param_1 = local_80;
    lVar4 = local_80;
    if (iVar3 < 1) goto LAB_001f95ac;
  }
  uVar10 = 0;
  lVar7 = (long)iVar3;
  do {
    plVar8 = (long *)local_78[lVar7 + -1];
    bVar2 = *(byte *)((long)plVar8 + 0xac);
                    /* try { // try from 001f9518 to 001f955b has its CatchHandler @ 001f9634 */
    lVar4 = (**(code **)(*plVar8 + 0x1c0))(plVar8);
    FUN_001e1720(plVar8 + 3);
    FUN_00207780(plVar8 + 5,param_1 + 0x2430);
    if (lVar4 != 0) {
      FUN_001ce870(param_1 + 0x10,lVar4 + 0x10);
    }
    FUN_001cd8e0(param_1 + 0x10,plVar8 + 0xc,param_3 & 1,0);
    lVar4 = local_80;
    uVar10 = bVar2 | uVar10;
    bVar1 = 1 < lVar7;
    lVar7 = lVar7 + -1;
  } while (bVar1);
  if ((uVar10 >> 5 & 1) != 0) {
                    /* try { // try from 001f957c to 001f957f has its CatchHandler @ 001f9600 */
    uVar9 = FUN_003baae0(param_2 + 6);
    if ((uint)uVar9 < 0xffffffc0) {
      lVar7 = (uVar9 >> 0xb & 0x1fffff) * 4;
      *(uint *)(*(long *)(lVar4 + 0x1fa0) + lVar7) =
           *(uint *)(*(long *)(lVar4 + 0x1fa0) + lVar7) &
           (1 << (ulong)((uint)uVar9 >> 6 & 0x1f) ^ 0xffffffffU);
    }
  }
LAB_001f95ac:
                    /* try { // try from 001f95b4 to 001f95cb has its CatchHandler @ 001f9614 */
  FUN_001ce690(lVar4 + 0x10,param_2 + 3);
  local_68 = param_2;
  FUN_001d9c60(lVar4 + 0x25f8,&local_68);
  if (local_70 != '\0') {
                    /* try { // try from 001f95d8 to 001f95df has its CatchHandler @ 001f9610 */
    FUN_00401ce0(&local_78,local_78);
  }
  return;
}


