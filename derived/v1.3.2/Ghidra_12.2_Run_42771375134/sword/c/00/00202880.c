/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00202880; name: FUN_00202880
 */


bool FUN_00202880(long param_1,undefined8 *param_2,long param_3,ushort *param_4,undefined8 *param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined1 auStack_ec [4];
  undefined *local_e8;
  long lStack_e0;
  undefined8 *local_d8;
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
  undefined1 local_80;
  undefined8 local_78;
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
  *(undefined1 *)(param_3 + 0x48) = 0;
  *(undefined4 *)(param_3 + 0x5c) = 0;
  local_c8 = *param_4;
  local_b0[0] = *(undefined4 *)(param_2 + 2);
  local_e8 = PTR_DAT_027111f8 + 0x10;
  local_a0 = 4;
  if ((local_c8 & 0x40) != 0 || (uVar2 & 0x10) != 0) {
    local_a0 = 0x40;
  }
  local_9e = 1;
  uVar3 = *(ushort *)(param_6 + 0x10);
  uVar9 = (uint)uVar3;
  local_9d = (byte)(uVar3 >> 5) & 1;
  local_9b = (undefined1)((uVar2 & 0x10) >> 4);
  local_9a = 0;
  local_80 = 0;
  local_78 = 0;
  lStack_e0 = param_1;
  local_d8 = param_2;
  lStack_d0 = param_3;
  local_c0 = param_6;
  uStack_b8 = param_7;
  local_a8 = param_8;
  local_9c = local_9d;
  local_70 = param_3;
  if ((lVar6 == 0xffffffff) || (*(int *)(param_3 + 0x58) != 0)) {
    plVar8 = *(long **)(param_1 + 0x2460);
    if ((uVar3 & 1) == 0) {
LAB_002029c0:
      if ((uVar9 >> 1 & 1) == 0) {
        local_68 = 1;
        cVar1 = *(char *)(param_3 + 0x48);
      }
      else {
        local_68 = (**(code **)(*plVar8 + 0x30))(plVar8,*param_2,param_2[1],local_b0,&local_e8);
        local_68 = local_68 & 1;
        cVar1 = *(char *)(param_3 + 0x48);
      }
    }
    else {
LAB_002029a0:
      local_9a = 0;
      uVar9 = (uint)uVar3;
                    /* try { // try from 002029b0 to 002029fb has its CatchHandler @ 00202aac */
      uVar7 = (**(code **)(**(long **)(param_1 + 0x2430) + 0x30))
                        (*(long **)(param_1 + 0x2430),*param_2,param_2[1],local_b0,&local_e8);
      if ((uVar7 & 1) != 0) goto LAB_002029c0;
      cVar1 = *(char *)(param_3 + 0x48);
    }
    if (cVar1 != '\0') {
      bVar4 = true;
      goto LAB_00202a78;
    }
    uVar9 = *(uint *)(param_3 + 0x5c);
  }
  else {
                    /* try { // try from 00202a20 to 00202a2f has its CatchHandler @ 00202aa8 */
    uVar5 = FUN_0039a960(param_1 + 0x2430,lVar6);
    local_9a = 1;
                    /* try { // try from 00202a38 to 00202a43 has its CatchHandler @ 00202aa4 */
    uVar7 = FUN_00203230(&local_e8,auStack_ec,uVar5);
    local_9a = 0;
    if ((uVar7 & 1) != 0) {
      uVar3 = *(ushort *)(param_6 + 0x10);
      plVar8 = *(long **)(param_1 + 0x2460);
      uVar9 = (uint)uVar3;
      if ((uVar3 & 1) != 0) goto LAB_002029a0;
      goto LAB_002029c0;
    }
    uVar9 = (uint)*(byte *)(param_3 + 0x48) | *(uint *)(param_3 + 0x5c);
  }
  bVar4 = uVar9 != 0;
LAB_00202a78:
  FUN_002039f0(&local_70);
  return bVar4;
}


