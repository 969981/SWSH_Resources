/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00202f50; name: FUN_00202f50
 */


bool FUN_00202f50(long param_1,long param_2,long param_3,ushort *param_4,undefined8 *param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  undefined1 auStack_170 [72];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_ec [4];
  undefined *local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  ushort local_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  byte local_9d;
  byte local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined1 *local_78;
  long local_70;
  byte local_68;
  
  uVar2 = *(ushort *)(param_6 + 0x10);
  if (param_5 == (undefined8 *)0x0) {
    lVar6 = 0xffffffff;
  }
  else {
    uVar5 = FUN_001e18a0(param_5[1]);
    lVar6 = FUN_00207f80(uVar5,*param_5);
  }
  FUN_0039ace0(param_1 + 0x2430);
  local_68 = 1;
  *(undefined1 *)(param_3 + 0x40) = 0;
  uVar3 = DAT_01d4c270;
  *(undefined4 *)(param_3 + 0x54) = 0;
  local_c8 = *param_4;
  local_e8 = PTR_DAT_02711208 + 0x10;
  local_b0[0] = NEON_fminnm(*(undefined4 *)(param_2 + 0x10),uVar3);
  local_a0 = 4;
  if ((local_c8 & 0x40) != 0 || (uVar2 & 0x10) != 0) {
    local_a0 = 0x40;
  }
  local_9e = 1;
  uVar10 = (uint)*(ushort *)(param_6 + 0x10);
  local_9d = (byte)(*(ushort *)(param_6 + 0x10) >> 5) & 1;
  local_9b = (undefined1)((uVar2 & 0x10) >> 4);
  local_9a = 0;
  local_80 = 0;
  local_78 = (undefined1 *)0x0;
  lStack_e0 = param_1;
  local_d8 = param_2;
  lStack_d0 = param_3;
  local_c0 = param_6;
  uStack_b8 = param_7;
  local_a8 = param_8;
  local_9c = local_9d;
  local_70 = param_3;
  if ((lVar6 == 0xffffffff) || (*(int *)(param_3 + 0x50) != 0)) {
LAB_002030d4:
    local_78 = (undefined1 *)0x0;
    local_9a = 0;
    plVar9 = *(long **)(param_1 + 0x2430);
    plVar8 = *(long **)(param_1 + 0x2460);
                    /* try { // try from 002030e4 to 002030ef has its CatchHandler @ 002031f0 */
    FUN_00295110(*(undefined4 *)(param_2 + 0x28),auStack_170,*(undefined8 *)(param_2 + 0x18),
                 *(undefined8 *)(param_2 + 0x20));
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_88 = local_118;
    uStack_84 = local_114;
    local_80 = 1;
    local_78 = auStack_170;
                    /* try { // try from 00203124 to 0020317b has its CatchHandler @ 002031ec */
    if (((uVar10 & 1) == 0) ||
       (uVar7 = (**(code **)(*plVar9 + 0x40))
                          (plVar9,auStack_170,*(undefined8 *)(param_2 + 8),local_b0,&local_e8),
       (uVar7 & 1) != 0)) {
      if ((uVar10 >> 1 & 1) == 0) {
        local_68 = 1;
        cVar1 = *(char *)(param_3 + 0x40);
      }
      else {
        local_68 = (**(code **)(*plVar8 + 0x40))
                             (plVar8,auStack_170,*(undefined8 *)(param_2 + 8),local_b0,&local_e8);
        local_68 = local_68 & 1;
        cVar1 = *(char *)(param_3 + 0x40);
      }
    }
    else {
      cVar1 = *(char *)(param_3 + 0x40);
    }
    if (cVar1 != '\0') {
      bVar4 = true;
      goto LAB_002031b4;
    }
    uVar10 = *(uint *)(param_3 + 0x54);
  }
  else {
                    /* try { // try from 0020306c to 0020307b has its CatchHandler @ 002031e8 */
    uVar5 = FUN_0039a960(param_1 + 0x2430,lVar6);
    local_9a = 1;
                    /* try { // try from 0020308c to 00203097 has its CatchHandler @ 002031e4 */
    FUN_00295110(*(undefined4 *)(param_2 + 0x28),auStack_170,*(undefined8 *)(param_2 + 0x18),
                 *(undefined8 *)(param_2 + 0x20));
    local_98 = local_128;
    uStack_90 = uStack_120;
    local_88 = local_118;
    uStack_84 = local_114;
    local_80 = 1;
                    /* try { // try from 002030b4 to 002030c3 has its CatchHandler @ 002031e0 */
    local_78 = auStack_170;
    uVar7 = FUN_00203f80(&local_e8,auStack_ec,uVar5);
    local_78 = (undefined1 *)0x0;
    local_9a = 0;
    if ((uVar7 & 1) != 0) {
      uVar10 = (uint)*(ushort *)(param_6 + 0x10);
      goto LAB_002030d4;
    }
    uVar10 = (uint)*(byte *)(param_3 + 0x40) | *(uint *)(param_3 + 0x54);
  }
  bVar4 = uVar10 != 0;
LAB_002031b4:
  FUN_00204b10(&local_70);
  return bVar4;
}


