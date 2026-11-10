/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039ab70; name: FUN_0039ab70
 */


void FUN_0039ab70(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 local_48;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    lVar5 = param_1[3];
    pcVar7 = *(code **)PTR_PTR_027126e0;
    uVar6 = 0;
    do {
      uVar2 = *(uint *)(lVar5 + uVar6 * 4);
      lVar4 = (ulong)(uVar2 >> 5) * 4;
      *(uint *)(param_1[1] + lVar4) =
           *(uint *)(param_1[1] + lVar4) & (1 << ((ulong)uVar2 & 0x1f) ^ 0xffffffffU);
      puVar3 = (undefined8 *)
               (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,(ulong)uVar2,&local_48);
      (*pcVar7)(local_48,*puVar3,puVar3[1]);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
    (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,lVar5,uVar1);
    *(uint *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + uVar1;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar1 = *(uint *)(param_1 + 10);
  if (uVar1 != 0) {
    lVar5 = param_1[9];
    pcVar7 = *(code **)(PTR_PTR_027126e0 + 8);
    uVar6 = 0;
    do {
      uVar2 = *(uint *)(lVar5 + uVar6 * 4);
      lVar4 = (ulong)(uVar2 >> 5) * 4;
      *(uint *)(param_1[7] + lVar4) =
           *(uint *)(param_1[7] + lVar4) & (1 << ((ulong)uVar2 & 0x1f) ^ 0xffffffffU);
      puVar3 = (undefined8 *)
               (**(code **)(*(long *)param_1[6] + 0x50))((long *)param_1[6],(ulong)uVar2,&local_48);
      (*pcVar7)(local_48,*puVar3,puVar3[1]);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
    (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],lVar5,uVar1);
    *(uint *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + uVar1;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  return;
}


