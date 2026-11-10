/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00202b30; name: FUN_00202b30
 */


bool FUN_00202b30(long param_1,long param_2,long *param_3,ushort *param_4,undefined8 *param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined1 auStack_158 [128];
  undefined *local_d8;
  long lStack_d0;
  long local_c8;
  long *plStack_c0;
  ushort local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  byte local_8d;
  byte local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_70;
  undefined1 *local_68;
  
  uVar2 = *(ushort *)(param_6 + 0x10);
  if (param_5 == (undefined8 *)0x0) {
    lVar5 = 0xffffffff;
  }
  else {
    uVar4 = FUN_001e18a0(param_5[1]);
    lVar5 = FUN_00207f80(uVar4,*param_5);
  }
  FUN_0039ace0(param_1 + 0x2430);
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined4 *)((long)param_3 + 0x34) = 0;
  local_b8 = *param_4;
  local_d8 = PTR_DAT_02711200 + 0x10;
  local_a0 = 0x7f7fffff;
  local_90 = 4;
  if ((local_b8 & 0x40) != 0 || (uVar2 & 0x10) != 0) {
    local_90 = 0x40;
  }
  local_8e = 1;
  uVar9 = (uint)*(ushort *)(param_6 + 0x10);
  local_8d = (byte)(*(ushort *)(param_6 + 0x10) >> 5) & 1;
  local_8b = (undefined1)((uVar2 & 0x10) >> 4);
  local_8a = 0;
  local_70 = 0;
  local_68 = (undefined1 *)0x0;
  lStack_d0 = param_1;
  local_c8 = param_2;
  plStack_c0 = param_3;
  local_b0 = param_6;
  uStack_a8 = param_7;
  local_98 = param_8;
  local_8c = local_8d;
  if ((lVar5 == 0xffffffff) || ((int)param_3[6] != 0)) {
LAB_00202c68:
    local_8a = 0;
    plVar8 = *(long **)(param_1 + 0x2430);
    plVar7 = *(long **)(param_1 + 0x2460);
                    /* try { // try from 00202c78 to 00202c83 has its CatchHandler @ 00202d88 */
    FUN_00295110(*(undefined4 *)(param_2 + 0x28),auStack_158,*(undefined8 *)(param_2 + 0x18),
                 *(undefined8 *)(param_2 + 0x20));
    local_68 = auStack_158;
                    /* try { // try from 00202c94 to 00202ccb has its CatchHandler @ 00202d78 */
    if (((uVar9 & 1) != 0) &&
       (uVar6 = (**(code **)(*plVar8 + 0x38))(plVar8,auStack_158,&local_d8), (uVar6 & 1) == 0))
    goto LAB_00202cec;
    if ((uVar9 >> 1 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)(*plVar7 + 0x38))(plVar7,auStack_158,&local_d8);
    }
    iVar1 = *(int *)((long)param_3 + 0x34);
    bVar3 = (char)param_3[4] != '\0' || iVar1 != 0;
    if ((uVar6 & 1) == 0) goto LAB_00202d20;
  }
  else {
                    /* try { // try from 00202c38 to 00202c47 has its CatchHandler @ 00202d64 */
    uVar4 = FUN_0039a960(param_1 + 0x2430,lVar5);
    local_8a = 1;
                    /* try { // try from 00202c50 to 00202c5b has its CatchHandler @ 00202d54 */
    uVar6 = FUN_00203b10(&local_d8,auStack_158,uVar4);
    local_8a = 0;
    if ((uVar6 & 1) != 0) {
      uVar9 = (uint)*(ushort *)(param_6 + 0x10);
      goto LAB_00202c68;
    }
LAB_00202cec:
    iVar1 = *(int *)((long)param_3 + 0x34);
    bVar3 = (char)param_3[4] != '\0' || iVar1 != 0;
  }
                    /* try { // try from 00202d10 to 00202d17 has its CatchHandler @ 00202d74 */
  if ((iVar1 != 0) && (uVar6 = (**(code **)*param_3)(param_3,param_3[5]), (uVar6 & 1) != 0)) {
    *(undefined4 *)((long)param_3 + 0x34) = 0;
  }
LAB_00202d20:
                    /* try { // try from 00202d28 to 00202d2f has its CatchHandler @ 00202dd0 */
  (**(code **)(*param_3 + 8))(param_3);
  return bVar3;
}


