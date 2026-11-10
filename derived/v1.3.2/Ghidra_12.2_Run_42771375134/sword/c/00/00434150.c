/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00434150; name: FUN_00434150
 */


undefined4 FUN_00434150(void *param_1)

{
  ThreadType *pTVar1;
  undefined *puVar2;
  undefined *puVar3;
  HardwareOpusDecoder *this;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined4 uVar7;
  
  puVar3 = PTR_DAT_02712e88;
  puVar2 = PTR_DAT_02712e28;
  if (*(long *)PTR_DAT_02712e88 == 0) {
    this = (HardwareOpusDecoder *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x40);
    if (this == (HardwareOpusDecoder *)0x0) {
      return 2;
    }
    nn::codec::HardwareOpusDecoder::HardwareOpusDecoder(this,0);
    uVar4 = (**(code **)(*(long *)this + 0x10))(this,8000,1);
    uVar5 = (**(code **)(*(long *)this + 0x10))(this,12000,1);
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = (**(code **)(*(long *)this + 0x10))(this,16000,1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = (**(code **)(*(long *)this + 0x10))(this,24000,1);
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = (**(code **)(*(long *)this + 0x10))(this,48000,1);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    *(ulong *)puVar3 = uVar4;
    uVar4 = (**(code **)(*(long *)this + 0x10))(this,8000,2);
    uVar5 = (**(code **)(*(long *)this + 0x10))(this,12000,2);
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = (**(code **)(*(long *)this + 0x10))(this,16000,2);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = (**(code **)(*(long *)this + 0x10))(this,24000,2);
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = (**(code **)(*(long *)this + 0x10))(this,48000,2);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    uVar7 = *(undefined4 *)puVar2;
    *(ulong *)(puVar3 + 8) = uVar4;
    (*(code *)**(undefined8 **)this)(this);
    FUN_00404870(uVar7,this);
  }
  if (*(char *)((long)param_1 + 0x8a0) != '\0') {
    return 2;
  }
  *(undefined1 *)((long)param_1 + 0xa58) = 0;
  nn::os::InitializeEvent((long)param_1 + 0xa30,0,1);
  puVar2 = PTR_DAT_02712e50;
  pvVar6 = (void *)FUN_007749e0(*(undefined8 *)(PTR_DAT_02712e50 + 0x68),0x1000);
  *(void **)((long)param_1 + 0xa20) = pvVar6;
  uVar5 = *(ulong *)(puVar2 + 0x68);
  *(int *)((long)param_1 + 0xa28) = (int)uVar5;
  pTVar1 = (ThreadType *)((long)param_1 + 0x860);
  nn::os::CreateThread
            (pTVar1,(_func_void_void_ptr *)PTR_LAB_02712e90,param_1,pvVar6,uVar5 & 0xffffffff,
             *(int *)(puVar2 + 0x60));
  nn::os::SetThreadName(pTVar1,"AK::OpusDecodingThread");
  nn::os::SetThreadCoreMask(pTVar1,*(int *)(puVar2 + 0x70),*(ulong *)(puVar2 + 0x78));
  nn::os::StartThread(pTVar1);
  uVar7 = 1;
  if (*(char *)((long)param_1 + 0x8a0) == '\0') {
    uVar7 = 2;
  }
  return uVar7;
}


