/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00319850; name: FUN_00319850
 */


void FUN_00319850(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_4a8 [64];
  undefined1 local_2a8;
  undefined8 *local_2a0;
  ulong local_298;
  undefined8 *local_290;
  undefined1 local_288 [512];
  undefined1 local_88;
  undefined1 *local_80;
  ulong local_78;
  char local_6c [4];
  undefined8 local_68;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  local_290 = *(undefined8 **)(param_5 + 0x10);
  local_78 = 0x4000000000;
  local_88 = 1;
  local_80 = local_288;
                    /* try { // try from 003198b0 to 003198bb has its CatchHandler @ 00319a74 */
  uVar1 = (**(code **)(*param_4 + 0xd8))(param_4);
  local_4a8[0] = 0;
                    /* try { // try from 003198c0 to 003198cf has its CatchHandler @ 00319a64 */
  FUN_00320390(&local_290,uVar1,local_4a8);
                    /* try { // try from 003198dc to 003198eb has its CatchHandler @ 00319a74 */
  (**(code **)(*param_4 + 0xe0))(param_4,local_80,uVar1,0);
  if (uVar1 != 0) {
    uVar5 = 0;
LAB_00319904:
    do {
      plVar4 = *(long **)(local_80 + uVar5 * 8);
      local_298 = 0x4000000000;
      local_2a8 = 1;
      local_2a0 = local_4a8;
                    /* try { // try from 00319920 to 0031992b has its CatchHandler @ 00319a98 */
      uVar2 = (**(code **)(*plVar4 + 0x1c8))(plVar4);
      local_68 = 0;
                    /* try { // try from 00319930 to 0031993f has its CatchHandler @ 00319a88 */
      FUN_00320470(local_4a8,uVar2,&local_68);
                    /* try { // try from 0031994c to 0031995b has its CatchHandler @ 00319a98 */
      (**(code **)(*plVar4 + 0x1d0))(plVar4,local_2a0,uVar2,0);
      if (uVar2 != 0) {
        uVar6 = 0;
        do {
          while( true ) {
            local_68 = local_2a0[uVar6];
                    /* try { // try from 00319978 to 00319983 has its CatchHandler @ 00319aec */
            puVar3 = (undefined8 *)FUN_00320860(param_1[5],&local_68,local_6c);
            if (local_6c[0] == '\0') break;
            uVar6 = uVar6 + 1;
            if (uVar2 <= uVar6) goto LAB_003199b0;
          }
          *puVar3 = local_68;
          puVar3[1] = plVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
LAB_003199b0:
      puVar3 = local_2a0;
      if ((-1 < (long)local_298) && ((local_298 & 0x7fffffff00000000) != 0)) {
        if (local_4a8 == local_2a0) {
          local_2a8 = 0;
          uVar5 = uVar5 + 1;
          if (uVar1 <= uVar5) break;
          goto LAB_00319904;
        }
        if (local_2a0 != (undefined8 *)0x0) {
                    /* try { // try from 003199d0 to 003199e3 has its CatchHandler @ 00319a84 */
          plVar4 = (long *)FUN_00400d30();
          (**(code **)(*plVar4 + 0x18))(plVar4,puVar3);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  if ((((-1 < (long)local_78) && ((local_78 & 0x7fffffff00000000) != 0)) && (local_288 != local_80))
     && (local_80 != (undefined1 *)0x0)) {
                    /* try { // try from 00319a34 to 00319a37 has its CatchHandler @ 00319a60 */
    (**(code **)(*(long *)*local_290 + 0x18))();
  }
  return;
}


