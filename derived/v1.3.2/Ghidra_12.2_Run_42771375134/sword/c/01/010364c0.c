/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010364c0; name: FUN_010364c0
 */


void FUN_010364c0(long *param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  long *plStack_230;
  undefined4 local_228;
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  long *plStack_1b0;
  undefined4 local_1a8;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long *plStack_130;
  undefined4 local_128;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long *plStack_b0;
  undefined4 local_a8;
  undefined8 local_50 [3];
  long local_38;
  
  if (param_2 < 4) {
    plVar1 = param_1 + 0x20;
    switch(param_2) {
    case 0:
      if ((char)param_1[0x1e] != '\0') {
        FUN_006cf0a0(local_50,&DAT_0266a340);
        FUN_016d3620(local_50);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
      }
      local_50[0] = 0xd5a646e9eb5de80c;
      local_d0 = &LAB_01036940;
      local_c8 = FUN_01036970;
      local_c0 = &LAB_01036980;
      local_a8 = 0;
      local_b8 = &LAB_01036990;
      plStack_b0 = param_1;
      FUN_00ffd120(plVar1,local_50,&local_d0);
      pcVar3 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar3)(&plStack_b0);
      }
      local_50[0] = 0x3b8f5513c2470901;
      FUN_00ffd010(plVar1,local_50);
      pcVar3 = *(code **)(*param_1 + 0x58);
      uVar2 = 0;
      break;
    case 1:
      if (*(char *)((long)param_1 + 0xf1) != '\0') {
        FUN_006cf0a0(local_50,&DAT_0266a358);
        FUN_016d3620(local_50);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
      }
      local_50[0] = 0x31b5f77ad1a1d139;
      local_128 = 1;
      local_150 = &LAB_010369a0;
      local_148 = FUN_010369d0;
      local_140 = &LAB_010369e0;
      local_138 = &LAB_010369f0;
      plStack_130 = param_1;
      FUN_00ffd120(plVar1,local_50,&local_150);
      pcVar3 = local_148;
      if (local_148 != (code *)0x0) {
        local_140 = (undefined1 *)0x0;
        local_138 = (undefined1 *)0x0;
        local_150 = (undefined1 *)0x0;
        local_148 = (code *)0x0;
        (*pcVar3)(&plStack_130);
      }
      pcVar3 = *(code **)(*param_1 + 0x58);
      uVar2 = 1;
      break;
    case 2:
      local_50[0] = 0x8e89686f5660e8f;
      local_1a8 = 2;
      local_1d0 = &LAB_01036a00;
      local_1c8 = FUN_01036a30;
      local_1c0 = &LAB_01036a40;
      local_1b8 = &LAB_01036a50;
      plStack_1b0 = param_1;
      FUN_00ffd120(plVar1,local_50,&local_1d0);
      pcVar3 = local_1c8;
      if (local_1c8 != (code *)0x0) {
        local_1c0 = (undefined1 *)0x0;
        local_1b8 = (undefined1 *)0x0;
        local_1d0 = (undefined1 *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar3)(&plStack_1b0);
      }
      pcVar3 = *(code **)(*param_1 + 0x58);
      uVar2 = 2;
      break;
    case 3:
      local_50[0] = 0xbf2bb2531b7cde14;
      local_228 = 3;
      local_250 = &LAB_01036a60;
      local_248 = FUN_01036a90;
      local_240 = &LAB_01036aa0;
      local_238 = &LAB_01036ab0;
      plStack_230 = param_1;
      FUN_00ffd120(plVar1,local_50,&local_250);
      pcVar3 = local_248;
      if (local_248 != (code *)0x0) {
        local_240 = (undefined1 *)0x0;
        local_238 = (undefined1 *)0x0;
        local_250 = (undefined1 *)0x0;
        local_248 = (code *)0x0;
        (*pcVar3)(&plStack_230);
      }
      pcVar3 = *(code **)(*param_1 + 0x58);
      uVar2 = 3;
    }
    (*pcVar3)(param_1,uVar2);
  }
  return;
}


