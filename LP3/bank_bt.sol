//SPDX-License-Identifier: MIT
pragma solidity >=0.8.7;

contract bank{
    mapping(address => uint256) public balances;
    function deposit() public payable{
        balances[msg.sender] += msg.value;
    }
    function withdraw(uint256 _amount) public payable{
        require(balances[msg.sender] >= _amount, "not enough ether.");
        balances[msg.sender] -= _amount;
        (bool sent,) = msg.sender.call{value:_amount}("sent");
        require(sent, "failed to send ether");
    }
    function getbal()public view returns(uint256){
        return address(this).balance;
    }
}