/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bed50; name: FUN_003bed50
 */


void FUN_003bed50(long *param_1,long param_2,long param_3)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  
  FUN_003d97b0();
  *param_1 = (long)(PTR_DAT_02712770 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x16) = 0xffffffc0;
  param_1[0x10] = 0;
  param_1[0x11] = param_3 + 0x10;
  *(undefined1 *)((long)param_1 + 0xb6) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)((long)param_1 + 0xb4) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3fc0000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f80000000000000;
  *(undefined2 *)((long)param_1 + 0x7e) = *(undefined2 *)(param_3 + 0x2e);
  *(undefined8 *)(param_3 + 0xa4) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  uVar1 = (*(byte *)(param_3 + 0xc) & 2) << 4;
  *(ushort *)((long)param_1 + 0x7c) = uVar1;
  if ((*(byte *)(param_3 + 0x2c) >> 5 & 1) != 0) {
    *(ushort *)((long)param_1 + 0x7c) = uVar1 | 0x40;
  }
                    /* try { // try from 003bee30 to 003bee3b has its CatchHandler @ 003bf0e0 */
  if (((*(long *)(param_3 + 0xb0) == 0) || (uVar5 = FUN_003be9f0(param_3,0), (uVar5 & 1) == 0)) ||
     (pfVar6 = *(float **)(param_3 + 0xb0), pfVar6 == (float *)0x0)) {
    bVar10 = 0;
    bVar11 = 0;
    if (*(float *)(param_3 + 0x9c) <= 0.0) goto LAB_003beef4;
LAB_003bef64:
    bVar10 = bVar11;
    bVar11 = 1;
  }
  else {
    if (*(char *)(pfVar6 + 3) == '\0') {
      bVar10 = 0;
    }
    else if (((((*pfVar6 == 0.0) && (pfVar6[1] == 0.0)) &&
              ((pfVar6[2] == 0.0 && ((pfVar6[4] == 0.0 && (pfVar6[5] == 0.0)))))) &&
             (pfVar6[6] == 0.0)) &&
            (((pfVar6[8] == 0.0 && (pfVar6[9] == 0.0)) && (pfVar6[10] == 0.0)))) {
      if ((pfVar6[0xc] == 0.0) && (pfVar6[0xd] == 0.0)) {
        bVar3 = pfVar6[0xe] == 0.0;
      }
      else {
        bVar3 = false;
      }
      bVar10 = bVar3 ^ 1;
    }
    else {
      bVar10 = 1;
    }
    *(char *)((long)param_1 + 0xb6) = *(char *)(pfVar6 + 3);
    *(undefined1 *)(pfVar6 + 3) = 0;
    bVar11 = bVar10;
    if (0.0 < *(float *)(param_3 + 0x9c)) goto LAB_003bef64;
LAB_003beef4:
    bVar11 = bVar10;
    if (((*(float *)(param_3 + 0x50) != 0.0) || (*(float *)(param_3 + 0x54) != 0.0)) ||
       ((*(float *)(param_3 + 0x58) != 0.0 ||
        (((*(float *)(param_3 + 0x60) != 0.0 || (*(float *)(param_3 + 100) != 0.0)) ||
         (*(float *)(param_3 + 0x68) != 0.0)))))) goto LAB_003bef64;
  }
  bVar2 = *(byte *)(param_1[10] + 0x2c);
  uVar9 = *(undefined8 *)(param_2 + 0x748);
  if (*(char *)(param_1[10] + 0xd) == '\x04') {
    if (param_1[0x18] == 0) goto LAB_003befbc;
                    /* try { // try from 003bef88 to 003bef8f has its CatchHandler @ 003bf0d8 */
    uVar4 = FUN_003bbc80(param_1[0x18],param_1);
    uVar4 = *(uint *)(param_1[0x18] + 0x48) & 0xffffffc0 | uVar4 & 0x3f;
  }
  else {
                    /* try { // try from 003befa4 to 003befb7 has its CatchHandler @ 003bf0dc */
    uVar4 = FUN_00113650(uVar9,param_1 + 0xc,bVar2 & 1,bVar11);
  }
  *(uint *)(param_1 + 0x16) = uVar4;
LAB_003befbc:
  if ((bVar10 != 0) && (*(char *)(param_1[10] + 0xd) != '\x04')) {
    uVar4 = *(uint *)(param_1 + 0x16);
                    /* try { // try from 003befe4 to 003bf047 has its CatchHandler @ 003bf0e8 */
    FUN_00190b50((long *)(param_2 + 0x1198),(uVar4 >> 6) + 1);
    lVar7 = *(long *)(param_2 + 0x1198);
    lVar8 = (ulong)(uVar4 >> 0xb) * 4;
    *(uint *)(lVar7 + lVar8) = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar4 >> 6 & 0x1f);
  }
  FUN_003bf100(param_1,bVar11,1);
  if (bVar11 == 0) {
    *(undefined4 *)(param_1 + 0x17) = 0xfffffffe;
                    /* try { // try from 003bf084 to 003bf08b has its CatchHandler @ 003bf0e8 */
    FUN_00113e30(uVar9,(int)param_1[0x16]);
  }
  else {
    FUN_003dd720(param_2,param_1);
  }
  if ((bVar2 & 1) != 0) {
    if (param_1[0x19] != 0) {
      FUN_003c16d0(param_1[0x19],*(undefined8 *)(param_1[9] + 0x800));
    }
                    /* try { // try from 003bf050 to 003bf05b has its CatchHandler @ 003bf0e4 */
    if (((*(long *)(param_3 + 0xb0) == 0) || (uVar5 = FUN_003be9f0(param_3,1), (uVar5 & 1) == 0)) ||
       (*(long *)(param_3 + 0xb0) == 0)) {
                    /* try { // try from 003bf094 to 003bf0b3 has its CatchHandler @ 003bf0e4 */
      FUN_003bdd30(param_3,*(undefined8 *)(param_2 + 0x1168),1,0);
      FUN_00113e70(*(undefined8 *)(param_1[9] + 0x748),(int)param_1[0x16]);
    }
    else {
      *(ushort *)((long)param_1 + 0xb4) = *(ushort *)((long)param_1 + 0xb4) | 4;
    }
  }
  return;
}


