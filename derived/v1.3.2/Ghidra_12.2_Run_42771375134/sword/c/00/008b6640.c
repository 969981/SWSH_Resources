/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b6640; name: FUN_008b6640
 */


void FUN_008b6640(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x88) + 0x810);
  if (iVar2 != -1) {
    if (iVar2 == 1) {
      FUN_01038270(*(undefined8 *)(param_1 + 0x98),1);
      FUN_008c12f0(*(undefined8 *)(param_1 + 0x90));
      FUN_008b69d0(param_1,0);
      *(undefined4 *)(param_1 + 0x7c) = 8;
    }
    else if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 5;
      iVar2 = *(int *)(*(long *)(param_1 + 0x90) + 0x640);
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8);
      uVar1 = 0x32d16ee1b8a26a0a;
      if (iVar2 < 2) {
        uVar1 = 0x5da8de220eb28790;
      }
      uVar3 = FUN_008c8330();
      FUN_014c9900(uVar7,0,uVar3,iVar2);
      FUN_014ca220(*(undefined8 *)(*(long *)(param_1 + 0x98) + 0x5d8),1,
                   *(int *)(*(long *)(param_1 + 0x90) + 0x640) *
                   *(int *)(*(long *)(param_1 + 0x90) + 0x648),8,0,1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x98),0);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0))
      {
        plVar4 = (long *)(**(code **)*puVar6)(puVar6);
        lVar5 = FUN_00897d00();
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)lVar5) {
            puVar6 = puVar6 + -10;
            goto LAB_008b673c;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
LAB_008b673c:
      FUN_008a6b70(puVar6,uVar1,0,0);
      FUN_006cf0a0(auStack_50,&DAT_026177a0);
      FUN_016d3620(auStack_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
  }
  return;
}


