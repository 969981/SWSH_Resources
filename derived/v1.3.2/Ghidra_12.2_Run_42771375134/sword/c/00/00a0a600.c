/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a600; name: FUN_00a0a600
 */


bool FUN_00a0a600(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_58;
  long local_50;
  undefined2 local_48;
  
  bVar4 = false;
  if ((((param_1[5] != 0) && (param_1[4] != 0)) && (*param_1 != 0)) &&
     (((param_1[2] != 0 && (param_1[3] != -0x340d631b7bddd9bb)) && (param_1[3] != 0)))) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0x100;
    lVar2 = *(long *)(param_1[2] + 0x1b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar2 + 0x2e8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar2 + 0x2e0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_50 = lVar3;
    (**(code **)(*(long *)*param_1 + 0x7e0))((long *)*param_1,&local_58,(char)param_1[1]);
    iVar1 = FUN_0077d480(local_50);
    bVar4 = iVar1 != 0;
    if (bVar4) {
      FUN_014c9110(lVar5,(int)param_1[6],local_50,(undefined1)local_48,local_48._1_1_);
      FUN_0077eb10(param_1[4],param_1 + 5,lVar3);
      FUN_0167cce0(lVar2,param_1 + 3,10);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
  }
  return bVar4;
}


