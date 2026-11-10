/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ccbb0; name: FUN_009ccbb0
 */


undefined8 FUN_009ccbb0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_70;
  undefined8 *local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x2b0) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_007a2490(*(undefined8 *)(param_1 + 0x2a0));
    if (*(long *)(lVar2 + 0x48) != 0) {
      puVar5 = *(undefined8 **)(lVar2 + 0x40);
      lVar2 = *(long *)(lVar2 + 0x48) << 3;
      do {
        uVar4 = *(undefined8 *)(param_1 + 0x2b0);
        uVar3 = *puVar5;
        FUN_009d16d0(&local_70,uVar4,param_2,*(undefined8 *)(param_1 + 0x78));
        FUN_009d1310(uVar4,&local_70,uVar3);
        FUN_0075efb0(auStack_48,local_70,0,1);
        puVar1 = local_68;
        local_68 = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1);
          (**(code **)(*local_60 + 0x18))(local_60,puVar1,uStack_58,local_50);
        }
        FUN_0075f0a0(auStack_48);
        puVar1 = local_68;
        local_68 = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1);
          (**(code **)(*local_60 + 0x18))(local_60,puVar1,uStack_58,local_50);
        }
        puVar5 = puVar5 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    uVar3 = 1;
  }
  return uVar3;
}


