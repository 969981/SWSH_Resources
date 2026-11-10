/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007658d0; name: FUN_007658d0
 */


int FUN_007658d0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_88;
  Buffer aBStack_80 [64];
  
  movie::Buffer::Buffer(aBStack_80);
  local_88 = 0;
  iVar1 = (**(code **)(*(long *)param_1[1] + 0x50))((long *)param_1[1],param_2,aBStack_80);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(long *)*param_1 + 0x50))((long *)*param_1,aBStack_80);
    if ((iVar1 == 0) && (iVar2 = movie::Buffer::Size(), 0 < iVar2)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 4;
    }
    (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_88);
    plVar6 = (long *)param_1[1];
    uVar3 = movie::Buffer::Offset();
    uVar4 = movie::Buffer::Size();
    (**(code **)(*plVar6 + 0x58))(plVar6,param_2,uVar3,uVar4,local_88,uVar5);
    (**(code **)(*(long *)*param_1 + 0x58))();
  }
  movie::Buffer::~Buffer(aBStack_80);
  return iVar1;
}


